int wsi = 0;

int wsm = 0; // Write Screen mode.
int filename_x = 15;
int fileroot_x = 15;
int ponbarra = 0;
//int xsv = 0;
int AgreeWS();
void CtrlWS();
void printXY(const char *text, int x, int y);

void WSPassChar(int *integer, int mode, int *xs, int ys);


// Buffers.
char wpb[] = ""; // Write provisional buffer.
char wfb[20]; // Write filename buffer.
char wfrb[30]; // 
int passctrl = 1;

/*
Extern buffer. Here is writted all the text :) .
*/
extern char *TextBuffer[128*1024];

void PrintWXY(const char *printthis, int x, int y);
void ShowRoot();
