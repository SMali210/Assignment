#include<stdio.h>

void Display(int iNo)
{
      static int iCnt = 1;

      if(iCnt <= iNo)
      {
            printf("*\t");
            iCnt++;
            Display(iNo);
      }
}
int main()
{
      int iValue = 0;

      printf("Enter the Number : \n");
      scanf("%d",&iValue);

      Display(iValue);

      return 0;
}