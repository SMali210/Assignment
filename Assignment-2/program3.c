#include<stdio.h>

void Display(int iNo)
{
      if(iNo < 10)
      {
            printf("HELLo");
      }
      else
      {
            printf("DEMO");
      }
}
int main()
{
      int iValue = 0;
      printf("Enter the Number :");
      scanf("%d",&iValue);

      Display(iValue);

      return 0;
}