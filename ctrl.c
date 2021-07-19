#include <pspctrl.h>
#include <pspkernel.h>
#include <pspdebug.h>
#include "ctrl.h"


void CtrlPad()
{
     SceCtrlData pad;
     
     do
     {
        sceCtrlReadBufferPositive(&pad, 1);
        if(pad.Buttons & PSP_CTRL_DOWN)
        {
        WriteNumberOnScreen(i+1, 1); // Don't write a number, write a character :) .
        if_cross = 1;
        }             
        else if(pad.Buttons & PSP_CTRL_UP)
        {
        WriteNumberOnScreen(i-1, -1);
        if_cross = 1;
        }
        else if(pad.Buttons & PSP_CTRL_SQUARE)
        {
             WriteSpecialWordScreen(isw+1, 1);
             if_cross = 2;
             }
        else if(pad.Buttons & PSP_CTRL_START)
        sceKernelExitGame();
        
        else if(pad.Buttons & PSP_CTRL_RTRIGGER)
             {
             // Space
             ManageX(1);
             PassChar(" "); ManageX(1);
             }
        else if(pad.Buttons & PSP_CTRL_CROSS)
        {
             if(if_cross == 1)
        // Siguiente caracter
             ManageX(1);
             else if(if_cross == 2)
             {
                  int buffer_size = PBufferSize();
                  ManageX(buffer_size);
                  }
        }
        else if(pad.Buttons & PSP_CTRL_CIRCLE)
        {
             // Siguiente linea
             sceKernelDelayThread(10000);
             PassChar("");
             ManageX(0);
             StrcatBufferString("\n");
             SaveCharOnBuffer();
            
             ManageY(1);
             ResetXY(0, y);
             //ManageX(4);
             }
        else if(pad.Buttons & PSP_CTRL_LTRIGGER)
        {
             
             sceKernelDelayThread(10000);
             
             //affb = afb-1;
             
             // If it don't work, use other.
             PassChar("");
             SetBufferKey(afb, 0x00);
             ManageX(-1);
             }   
        else if(pad.Buttons & PSP_CTRL_SELECT)
       
        AgreeWS();
        
        
        sceKernelDelayThread(100000);
        }while(passctrl == 1);
}
