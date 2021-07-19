#include <string.h>
#include <pspdebug.h>
#include "strings.h"
#include <pspiofilemgr.h>
#include <pspkernel.h>
#include <stdio.h>
//#include <stdlib.h>
void PassChar(const char *character)
{
     strcpy(provisional_buffer, character);
     pspDebugScreenPrintf("%s", character);
}

void SaveCharOnBuffer()
{
     
     strcat(TextBuffer, provisional_buffer);
}

void StrcatBufferString(const char *string)
{
     strcat(TextBuffer, "\n");
}
int SetBufferKey(int na, int key)
{
    return TextBuffer[na] = key;
}
int PBufferSize()
{
    int size = strlen(provisional_buffer);
    
    return size;
}
void SaveBuffer(char *text_to_write, char *root, char *filename)
{
     
     strcat(root, filename);
     int size = strlen(text_to_write); // - Don't tested. Replace it by the number 512 of the function sceIoWrite and test it.
     int OpenRoot = sceIoOpen(root, PSP_O_CREAT|PSP_O_TRUNC|PSP_O_WRONLY, 0777);
     //sceIoLseek(root, 10, SEEK_CUR);
     //sceIoWrite(text_to_write, text_to_write, sizeof(text_to_write));
     sceIoWrite(OpenRoot, text_to_write, size); // If size don't work, replace it by a number.
     sceIoClose(OpenRoot);
     
     sceKernelDelayThread(1000000);
     sceKernelExitGame();
}
void ReadFolderConfiguration(const char *filepath, char *savetext)
{
     int result;
     char text[30];
     FILE *file = fopen(filepath, "r");
          
     sprintf(savetext, "%s", fgets(text, 30, file));
     
     fclose(file);
     
     

}
     
