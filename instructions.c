#include "instructions.h"
#include <pspdebug.h>
#include <pspctrl.h>
void InstructionsMenu()
{
     pspDebugScreenClear();
     pspDebugScreenSetTextColor(0x0FF0FF); // Unknown color.
     pspDebugScreenPrintf("\
     -- Instructions menu (for write text) --\n\n\
        RTrigger = Space\n\
               X = Next character\n\
     Down and up = Change character\n\
           Start = Exit\n");
     
     pspDebugScreenPrintf("\n\nNow press O to return to main menu.");
           
     SceCtrlData inspad;
     
     while(1)
     {
             sceCtrlReadBufferPositive(&inspad, 1);
             if(inspad.Buttons & PSP_CTRL_CIRCLE)
             {
                               pspcw_mode = 0;
                               MainMenu();
                               }
             }
             
             }
