#define printf pspDebugScreenPrintf

int i = 0;
int y = 0;
int x = 0;
int afb = 0; // Use it for erase a block. It detects the buffer key and position.
int ManageX(int mode); //(int mode, int save)
int ManageY(int mode);
int ResetXY(int xs);
void WriteNumberOnScreen(int *toi, int mode);
