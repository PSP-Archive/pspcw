#include <stdio.h>
#include "readfilemode.h"

void cwReadFile(const char *root, char *tosave)
{
     FILE *file = fopen(root, "r");
     
     sprintf(tosave, "%s", fgets(tosave, 128*1024, file));
     
     fclose(root);
}
