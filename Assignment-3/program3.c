#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
      if(iNo <= 0)
      {
            iNo = -iNo;
      }
      int iCnt = 0;
      for(iCnt = 1;iCnt<=(iNo/2);iCnt++)
      {
            if((iNo % iCnt == 0) && (iCnt % 2) == 0 )
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

      DisplayEvenFactor(iValue);

      return 0;
}