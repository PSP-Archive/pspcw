// Write library PSPCW .
// Write_screen.c
//
// Use function SaveBuffer for save the file.


#include "write_screen.h"
#include <pspdebug.h>
#include <pspctrl.h>
//#include 

void CtrlWS()
{
     SceCtrlData wpad;
     
     while(passctrl == 2)
     {
             sceCtrlReadBufferPositive(&wpad, 1);
             if (wpad.Buttons & PSP_CTRL_DOWN)
             {
                              if(wsm == 0)
                              WSPassChar(wsi+1, 1, filename_x, 3);
                              //else if(wsm == 1)
                              /*else if(wsm == 1)
                              WSPassChar(wsi+1, 1, fileroot_x, 4);*/
             }
             else if(wpad.Buttons & PSP_CTRL_UP)
             {
                  if(wsm == 0)
                  WSPassChar(wsi-1, -1, filename_x, 3);
                 /* else if(wsm == 1)
                  WSPassChar(wsi-1, -1, fileroot_x, 4);*/
             }
             else if(wpad.Buttons & PSP_CTRL_CROSS) // Used for set the next character of filename or fileroot.
             {
                  if(wsm == 0)
                  {
                  filename_x++;
                  PFBuffer(wfb, wpb);
                  } // Añadir aqui un comando que guarde definitivamente el caracter en el buffer o montarse una función ''void'' que lo haga.
                 /* else if(wsm == 1)
                  {
                  fileroot_x++;
                  PFBuffer(wfrb, wpb);
                  }*/ // Lo mismo que el comentario de arriba aqui ;) .
                  sceKernelDelayThread(100000);
             }
             else if(wpad.Buttons & PSP_CTRL_SQUARE) // Used for jump from Filename to Fileroot.
             {
                  wsm++;
                  if(wsm > 1) // wsm > 2
                  SaveBuffer(TextBuffer, wfrb, wfb); // Don't put void save..., put the char to write and save.
                  // Escribir aqui, SaveBuffer para guardar el archivo.
                  sceKernelDelayThread(10000);
             }
             else if(wpad.Buttons & PSP_CTRL_RTRIGGER)
             {
                  if(wsm == 0)
                  {
                  printXY("/", filename_x, 3);
                  PFBuffer(wfb, wpb);
                  }
                 /* else if(wsm == 1)
                  {
                  printXY("/", fileroot_x, 4);
                  PFBuffer(wfrb, wpb);
                  }*/
                  if(wsm == 0)
                  {
                  filename_x++;
                  PFBuffer(wfb, wpb);
                  } // Añadir aqui un comando que guarde definitivamente el caracter en el buffer o montarse una función ''void'' que lo haga.
                  /*else if(wsm == 1)
                  {
                  fileroot_x++;
                  PFBuffer(wfrb, wpb);
                  }*/
                  sceKernelDelayThread(10000);
                  }
             else if(wpad.Buttons & PSP_CTRL_LTRIGGER)
             {
                  if(wsm == 0)
                  {
                  printXY(".", filename_x, 3);
                  PFBuffer(wfb, wpb);
                  }
                  else if(wsm == 1)
                  {
                  printXY(":", fileroot_x, 4);
                  PFBuffer(wfrb, wpb);
                  }
                  if(wsm == 0)
                  {
                  filename_x++;
                  PFBuffer(wfb, wpb);
                  } // Añadir aqui un comando que guarde definitivamente el caracter en el buffer o montarse una función ''void'' que lo haga.
                  else if(wsm == 1)
                  {
                  fileroot_x++;
                  PFBuffer(wfrb, wpb);
                  }
                  sceKernelDelayThread(10000);
                  }
             else if(wpad.Buttons & PSP_CTRL_CIRCLE)
             {
             //passctrl = 1;
             //CtrlPad();
             }
             
             sceKernelDelayThread(100000);
     }
             
}
void printXY(const char *text, int x, int y)
{
     pspDebugScreenSetXY(x, y);
     pspDebugScreenPrintf("%s", text);
     PTBuffer(wpb, text);
     // int mode for set it for filename or for root. :P
}

void PrintWXY(const char *printthis, int x, int y)
{
     pspDebugScreenSetXY(x, y);
     pspDebugScreenPrintf("%s", printthis);
     }
void ShowRoot()
{
     pspDebugScreenSetXY(3, 4);
     pspDebugScreenPrintf("File root : %s", wfrb);
}
int AgreeWS()
{
    ReadFolderConfiguration("FolderConfiguration.txt", wfrb);
    
   // if((wfrb[0] == 0x00) || (wfrb[0] == 0x20))
   // strcpy(wfrb, "ms0:/");
    
    passctrl = 2;
    pspDebugScreenClear(); pspDebugScreenSetXY(3, 1); 
    pspDebugScreenSetTextColor(0x0FFF0F);
    
    pspDebugScreenPrintf("PSPcw - Write Screen.");
    PrintWXY("Filename : unknown", 4, 3);
    ShowRoot();
    //PrintWXY("File root : ms0:/", 3, 4);
    pspDebugScreenPrintf("\n\n\n\
    Use down,up,Rtrigger, circle and cross for set the filename \n\
    and the file root.\n");
   // pspDebugScreenPrintf("\n\
   // Press O for go back.");
    
    //ReadString("PR.txt", wfrb);
    
    if(sceIoMkdir(wfrb, 0777) > 0);
    
    CtrlWS();
    
    
    return 0;
}
    
void WSPassChar(int *integer, int mode, int *xs, int ys)
{
     if(wsi == 0)
     {
                printXY("a", xs, ys);
                if(mode < 0)
                wsi = 28;
                }
     if(wsi == 1)
     {
                printXY("b", xs, ys);
                }
     if(wsi == 2)
     {
                printXY("c", xs, ys);
                }
     if(wsi == 3)
     {
                printXY("d", xs, ys);
                }
     if(wsi == 4)
     {
                printXY("e", xs, ys);
                }
     if(wsi == 5)
     {
                printXY("f", xs, ys);
                }
     if(wsi == 6)
     {
                printXY("g", xs, ys);
                }
     if(wsi == 7)
     {
                printXY("h", xs, ys);
                }
     if(wsi == 8)
     {
                printXY("i", xs, ys);
                }
     if(wsi == 9)
     {
                printXY("j", xs, ys);
                }
     if(wsi == 10)
     {
                printXY("k", xs, ys);
                }
     if(wsi == 11)
     {
                printXY("l", xs, ys);
                }
     if(wsi == 12)
     {
                printXY("m", xs, ys);
                }
     if(wsi == 13)
     {
                printXY("n", xs, ys);
                }
     if(wsi == 14)
     {
                printXY("o", xs, ys);
                }
     if(wsi == 15)
     {
                printXY("p", xs, ys);
                }
     if(wsi == 16)
     {
                printXY("q", xs, ys);
                }
     if(wsi == 17)
     {
                printXY("r", xs, ys);
                }
     if(wsi == 18)
     {
                printXY("s", xs, ys);
                }
     if(wsi == 19)
     {
                printXY("t", xs, ys);
                }
     if(wsi == 20)
     {
                printXY("u", xs, ys);
                }
     if(wsi == 21)
     {
                printXY("v", xs, ys);
                }
     if(wsi == 22)
     {
                printXY("w", xs, ys);
                }
     if(wsi == 23)
     {
                printXY("x", xs, ys);
                }
     if(wsi == 24)
     {
                printXY("y", xs, ys);
                }
     if(wsi == 25)
     {
                printXY("z", xs, ys);
                }
     if(wsi == 26)
     {
                printXY("0", xs, ys);
                }
     if(wsi == 27)
     {
                printXY("1", xs, ys);
                if(mode > 0)
                wsi = -1;
                }
     
     if(mode > 0)
     wsi++;
     else
     wsi--;
                
}
     
    
             
