#include<stdio.h>

int CountDiff(int iNo)
{
      int iCnt = 0;
      int iDigit = 0;
      int iSumEven = 0 , iSumOdd = 0 , iDiff = 0;

      while(iNo!=0)
      {
            iDigit =  iNo % 10;
            if((iDigit % 2)==0)
            {
                  iSumEven = iSumEven + iDigit;
            }
            else
            {
                  iSumOdd = iSumOdd + iDigit;
            }

            iDiff = iSumEven - iSumOdd;
 
            iNo = iNo /10;
      }
      return iDiff;
}
int main()
{
      int iValue = 0;
      int iRet = 0;

      printf("Enter the Number : ");
      scanf("%d",&iValue);

      iRet  = CountDiff(iValue);

      printf("%d\n",iRet);

      return 0;
}