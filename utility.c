// Utility.

#include <string.h>
#include <stdio.h>
#include "utility.h"
void PTBuffer(char *buffer, const char *texttopass)
{
     strcpy(buffer, texttopass);
}

void PFBuffer(char *buffer, char *second)
{
     strcat(buffer, second);
}

void ReadString(const char *root, char *buffertosave)
{
     char pb[] = "";
     FILE *path = fopen(root, "r");
     strcat(buffertosave, sprintf(pb, "%s", fgets(pb, 20, path)));
     if(!pb)
     printf("File don't read.");
     else
     {
         if(fclose(path) < 0)
         printf("File don't closed.");
         }
         
         
}
     
     
