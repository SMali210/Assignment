#include<stdio.h>

int CountOdd(int iNo)
{
      int iDigit = 0;
      int OddDigit = 0;

      while(iNo!=0)
      {
            iDigit = iNo % 10;

            if((iDigit % 2)!=0)
            {
                  OddDigit++;
            }

            iNo = iNo / 10;
      }
      return OddDigit;
}
int main()
{
      int ivalue = 0;
      int iRet = 0;

      printf("Enter The Number :");
      scanf("%d",&ivalue);

      iRet = CountOdd(ivalue);

      printf("%d",iRet);

      return 0;
}