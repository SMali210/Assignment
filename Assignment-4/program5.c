#include<stdio.h>



int main()
{
      int iValue = 0;
      int iRet = 0;
      printf("Enter the Number :");
      scanf("%d",&iValue);

     iRet = SumNonFactor(iValue);

     printf("Summation of Non factors are : %d\n",iRet);
      return 0;
}
