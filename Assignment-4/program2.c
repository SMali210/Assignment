#include<stdio.h>

void RevFactor(int iNo)
{
      int iCnt = 0;
      for(iCnt = iNo; iCnt>=1;iCnt--)
      {
            if((iNo % iCnt) == 0)
            {
                  printf("%d\t",iCnt);
            }
      }
}
int main()
{
      int iValue = 0;
      printf("Enter the Number :");
      scanf("%d",&iValue);

      RevFactor(iValue);
      return 0;
}