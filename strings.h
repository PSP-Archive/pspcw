char provisional_buffer[11];
char TextBuffer[128*1024];

void PassChar(const char *character);
void SaveCharOnBuffer();

void SaveBuffer(char *text_to_write, char *root, char *filename);
int SetBufferKey(int na, int key);
void ReadFolderConfiguration(const char *filepath, char *savetext);
int PBufferSize();
