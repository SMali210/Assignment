#include<stdio.h>

int CountFour(int iNo)
{
      int iDigit =0 , iFrqCount = 0;

      while(iNo!=0)
      {
            iDigit = iNo % 10;

            if(iDigit == 4)
            {
                  iFrqCount++;
            }

            iNo = iNo / 10;
      }
      return iFrqCount;
}
int main()
{
      int iValue = 0;
      int iRet = 0;

      printf("Enter the Number :");
      scanf("%d",&iValue);

      iRet = CountFour(iValue);

      printf("%d",iRet);

      return 0;
}