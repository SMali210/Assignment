#include<stdio.h>

int Factorial(int iNo)
{
      int Fact = 1;
      int iCnt = 0;
      if(iNo < 0)
      {
            iNo = -iNo;
      }
      for(iCnt = iNo;iCnt >=1;iCnt--)
      {
            Fact = Fact * iCnt ;
      }
      return Fact;

}
int main()
{
      int iValue = 0;
      int iRet = 0;
      printf("Enter the Number :");
      scanf("%d",&iValue);

      iRet = Factorial(iValue);

      printf("Factorial Numbers are : %d\n",iRet);

      return 0;
}