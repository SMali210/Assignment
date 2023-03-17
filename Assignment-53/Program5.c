#include<stdio.h>

void Display()
{
      static char ch = 'a';
      static int iCnt = 1;

      if(iCnt <=5)
      {
            printf("%c\t",ch);

            ch++;
            iCnt++;
            Display();            
      }

  
}
int main()
{
      Display();

      return 0;
}