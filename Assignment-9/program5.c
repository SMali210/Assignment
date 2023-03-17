#include<stdio.h>

int FactorialDiff(int iNo)
{
      int iCnt = 0;
      int iSum = 0;

      for(iCnt = 1;iCnt < iNo;iCnt++)
      {
            if((iCnt % iNo) == 0) 
            {
                  
            }
            else
            {
                  iSum = iSum + iCnt;
            }

      }
      return iSum;
      
}
int main()
{
      int iValue = 0;
      int iRet = 0;

      printf("Enter The Number :");
      scanf("%d",&iValue);

      iRet = FactorialDiff(iValue);

      printf("Factorial Differnce is %d ",iRet);

      return 0;
}