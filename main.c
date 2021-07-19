#include <pspkernel.h>
#include <pspdebug.h>
#include <pspiofilemgr.h>
#include <pspctrl.h>

PSP_MODULE_INFO("PSPcw", 0x0800, 1, 0);
PSP_MAIN_THREAD_ATTR(PSP_THREAD_ATTR_VSH);

#define printf pspDebugScreenPrintf
int pspcw_mode = 0;
char bufferr[128*1024];
void MainMenu()
{
    SceCtrlData pad;
    
    pspDebugScreenInit();
    pspDebugScreenClear();
    printf("Welcome to PSPcw.\n\n");
    pspDebugScreenSetTextColor(0x0FF000); //
    printf("\n\n\
        X - New text\n\
    START - Exit\n\
       [] - Instructions\n");
    while(pspcw_mode == 0)
    {
                     sceCtrlReadBufferPositive(&pad, 1);
                     if(pad.Buttons & PSP_CTRL_START)
                     sceKernelExitGame();
                     else if(pad.Buttons & PSP_CTRL_CROSS)
                     {
                          pspDebugScreenClear();
                          pspDebugScreenSetTextColor(0x000FF0); // Red
                     
                          CtrlPad();
                          pspcw_mode = 1;
                          }
                     else if(pad.Buttons & PSP_CTRL_SQUARE)
                     {
                     InstructionsMenu();
                     pspcw_mode = 2;
                     }
                    /* else if(pad.Buttons & PSP_CTRL_CIRCLE)
                     {
                          pspDebugScreenClear();
                          cwReadFile("ms0:/Becus/a..c", bufferr);
                          pspDebugScreenPrintf("%s", bufferr);
                          }*/
                    // else if(pad.Buttons & PSP_CTRL_CIRCLE)
                     // pad instructions ;
    }   
}      
int main()
{
    scePowerSetCpuClockFrequency(111);
    MainMenu();
    
            
    sceKernelSleepThread();
    return 0;
}
