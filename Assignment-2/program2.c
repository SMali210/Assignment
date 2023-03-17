#include<stdio.h>

void Display(int iNo)
{
      
      while(iNo>1)
      {
            printf("*");
            iNo--;
      }
}
int main()
{
      int iValue = 0;
      printf("Enetr the Number :");
      scanf("%d",&iValue);

      Display(iValue);

      return 0;
}