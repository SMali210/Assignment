#include<stdio.h>

int EvenFactorial(int iNo)
{
      int icnt = 0;
      int iFact = 1;
      if(iNo < 0)
      {
            iNo = -iNo;
      }
      for(icnt = 2;icnt <= iNo;icnt += 2)
      {
            if((icnt % 2)==0)
            {

              iFact = iFact * icnt;

            }

      }
      return iFact;
}
int main()
{
      int iValue = 0;
      int iRet = 0;

      printf("Enter The Number :");
      scanf("%d",&iValue);

      iRet = EvenFactorial(iValue);

      printf("Even Factorial Are : %d\n",iRet);

      return 0;
}