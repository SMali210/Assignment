#include<stdio.h>

int OddFactorial(int iNo)
{
      int icnt = 0;
      int iFact = 1;
      if(iNo < 0)
      {
            iNo = -iNo;
      }
      for(icnt = 1;icnt <= iNo;icnt =icnt+1)
      {
            if((icnt % 2)!=0)
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

      iRet = OddFactorial(iValue);

      printf("Odd Factorial Are : %d\n",iRet);

      return 0;
}