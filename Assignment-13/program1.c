#include<stdio.h>

int CountEven(int iNo)
{
      int iDigit = 0;
      int EvenDigit = 0;

      while(iNo!=0)
      {
            iDigit = iNo % 10;

            if((iDigit % 2)==0)
            {
                  EvenDigit++;
            }

            iNo = iNo / 10;
      }
      return EvenDigit;
}
int main()
{
      int ivalue = 0;
      int iRet = 0;

      printf("Enter The Number :");
      scanf("%d",&ivalue);

      iRet = CountEven(ivalue);

      printf("%d",iRet);

      return 0;
}