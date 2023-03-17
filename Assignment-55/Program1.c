#include<stdio.h>

void Display()
{
      static int iCnt = 5;

      if(iCnt >=1)
      {
           printf("%d\t",iCnt);
           printf("*\t");
            iCnt--;
            Display();
      }
}
int main()
{
      
      Display();

      return 0;
}