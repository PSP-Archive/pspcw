#include "cw.h"
#include <pspdebug.h>
void WriteSpecialWordScreen(int *toi, int mode)
{
   //  pspDebugScreenSetXY(3, 3);
     int get_x = pspDebugScreenGetX();
     if(get_x == 67)
     {
              x = 1;
              y = y+1;
              }
     pspDebugScreenSetXY(x, y);
     
     if(isw == 0)
     {
         PassChar("void");
         if(mode < 0)
         isw = 30;
         } 
     if(isw == 1)
     {
         PassChar("int");
         }
     if(isw == 2)
     {
         PassChar("char");
         
         }
      
     if(isw == 3)
     {
         PassChar("bool");
         } 
     if(isw == 4)
     {
         PassChar("true");
         } 
     if(isw == 5)
     {
         PassChar("false");
         } 
     if(isw == 6)
     {
         PassChar("break;");
         } 
     if(isw == 7)
     {
         PassChar("switch");
         } 
     if(isw == 8)
     {
         PassChar("while");
         } 
     if(isw == 9)
     {
         PassChar("if");
         } 
     if(isw == 10)
     {
         PassChar("else");
         } 
     if(isw == 11)
     {
         PassChar("else if");
         } 
     if(isw == 12)
     {
         PassChar("!=");
         } 
     if(isw == 13)
     {
         PassChar("==");
         } 
     if(isw == 14)
     {
         PassChar("<=");
         } 
     if(isw == 15)
     {
        PassChar(">=");
         } 
     if(isw == 16)
     {
         PassChar(">");
         } 
     if(isw == 17)
     {
         PassChar("<");
         } 
     if(isw == 18)
     {
         PassChar("&&");
         } 
     if(isw == 19)
     {
         PassChar("||");
         } 
     if(isw == 20)
     {
         PassChar("do");
         } 
     
     if(isw == 21)
     {
         PassChar("continue");
         } 
     if(isw == 22)
     {
         PassChar("auto");
         } 
     if(isw == 23)
     {
         PassChar("goto");
         
         } 
     if(isw == 24)
     {
         PassChar("extern");
         
         } 
     if(isw == 25)
     {
         PassChar("float");
         
         } 
     if(isw == 26)
     {
         PassChar("const char");
         
         } 
     if(isw == 27)
     {
         PassChar("short");
        
         }
     if(isw == 28)
     {
         PassChar("long");
         
         } 
     if(isw == 29)
     {
         PassChar("double");
         if(mode > 0)
         isw = -1;
         } 
     
     if(mode > 0)
     isw++;    
     else if(mode < 0)
     isw--;
     
     //printf("\nX coordenate = %i", pspDebugScreenGetX());
}
