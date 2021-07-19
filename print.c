#include <pspdebug.h>
#include "print.h"
int ManageX(int mode)//(int mode, int save)
{
    if(mode >= 0)
    {
            //if(save > -1)
            SaveCharOnBuffer();
            x = x+mode;
            afb++;
            }
    else
    {
           // if(save > -1)
            SaveCharOnBuffer();
            x = x+mode;
            afb--;
            }
}
int ManageY(int mode)
{
    if(mode > 0)
    y++;
    else
    y--;
}
int ResetXY(int xs)
{
    x = xs; //y = ys;
   pspDebugScreenSetXY(x, y);
}
void WriteNumberOnScreen(int *toi, int mode)
{
   //  pspDebugScreenSetXY(3, 3);
     int get_x = pspDebugScreenGetX();
     if(get_x == 67)
     {
              x = 1;
              y = y+1;
              }
     pspDebugScreenSetXY(x, y);
     
     if(i == 0)
     {
         PassChar("0");
         if(mode < 0)
         i = 65;
         } 
     if(i == 1)
     {
         PassChar("1");
         }
     if(i == 2)
     {
         PassChar("2");
         
         }
      
     if(i == 3)
     {
         PassChar("3");
         } 
     if(i == 4)
     {
         PassChar("4");
         } 
     if(i == 5)
     {
         PassChar("5");
         } 
     if(i == 6)
     {
         PassChar("6");
         } 
     if(i == 7)
     {
         PassChar("7");
         } 
     if(i == 8)
     {
         PassChar("8");
         } 
     if(i == 9)
     {
         PassChar("9");
         } 
     if(i == 10)
     {
         PassChar("a");
         } 
     if(i == 11)
     {
         PassChar("b");
         } 
     if(i == 12)
     {
         PassChar("c");
         } 
     if(i == 13)
     {
         PassChar("d");
         } 
     if(i == 14)
     {
         PassChar("e");
         } 
     if(i == 15)
     {
        PassChar("f");
         } 
     if(i == 16)
     {
         PassChar("g");
         } 
     if(i == 17)
     {
         PassChar("h");
         } 
     if(i == 18)
     {
         PassChar("i");
         } 
     if(i == 19)
     {
         PassChar("j");
         } 
     if(i == 20)
     {
         PassChar("k");
         } 
     
     if(i == 21)
     {
         PassChar("m");
         } 
     if(i == 22)
     {
         PassChar("n");
         } 
     if(i == 23)
     {
         PassChar("o");
         } 
     if(i == 24)
     {
         PassChar("p");
         } 
     if(i == 25)
     {
         PassChar("q");
         } 
     if(i == 26)
     {
         PassChar("r");
         } 
     if(i == 27)
     {
         PassChar("s");
         } 
     if(i == 28)
     {
         PassChar("t");
         } 
     if(i == 29)
     {
         PassChar("u");
         } 
     if(i == 30)
     {
         PassChar("v");
         } 
     if(i == 31)
     {
         PassChar("w");
         } 
     if(i == 32)
     {
         PassChar("x");
         } 
     if(i == 33)
     {
         PassChar("y");
         } 
     if(i == 34)
     {
         PassChar("z");
         } 
     if(i == 35)
     {
         PassChar("A");
         } 
     if(i == 36)
     {
         PassChar("B");
         } 
     if(i == 37)
     {
         PassChar("C");
         } 
     if(i == 38)
     {
         PassChar("D");
         } 
     if(i == 39)
     {
         PassChar("E");
         } 
     if(i == 40)
     {
         PassChar("F");
         } 
     if(i == 41)
     {
         PassChar("G");
         } 
     if(i == 42)
     {
         PassChar("H");
         } 
     if(i == 43)
     {
         PassChar("I");
         } 
     if(i == 44)
     {
         PassChar("J");
         } 
     if(i == 45)
     {
         PassChar("K");
         } 
     if(i == 46)
     {
         PassChar("L");
         } 
     if(i == 47)
     {
         PassChar("M");
         } 
     if(i == 48)
     {
         PassChar("N");
         } 
     if(i == 49)
     {
         PassChar("O");
         } 
     if(i == 50)
     {
         PassChar("P");
         } 
     if(i == 51)
     {
         PassChar("Q");
         } 
     if(i == 52)
     {
         PassChar("R");
         } 
     if(i == 53)
     {
         PassChar("S");
         } 
     if(i == 54)
     {
         PassChar("T");
         } 
     if(i == 55)
     {
         PassChar("U");
         } 
     if(i == 56)
     {
         PassChar("V");
         } 
     if(i == 57)
     {
         PassChar("W");
         } 
     if(i == 58)
     {
         PassChar("X");
         } 
     if(i == 59)
     {
         PassChar("Y");
         } 
     if(i == 60)
     {
         PassChar("Z");
         } 
     if(i == 61)
     {
         PassChar("{");
         } 
     if(i == 62)
     {
         PassChar("}");
         } 
     if(i == 63)
     {
         PassChar("(");
         } 
     if(i == 64)
     {
         PassChar(")");
         if(mode > 0)
         i = -1;
         }
     /*if(i == 65)
     {
         PassChar("\n");
         if(mode > 0)
         i = -1;
         }*/
     if(mode > 0)
     i++;    
     else if(mode < 0)
     i--;
     
     //printf("\nX coordenate = %i", pspDebugScreenGetX());
}
