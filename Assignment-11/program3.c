#include<stdio.h>

int SumRangeDisplay(int iStart ,int iEnd)
{
      int iCnt = 0;
      int iSum = 0;
      if(iStart < 0)
      {
            iStart = -iStart;
      }
      for(iCnt = iStart;iCnt <=iEnd;iCnt=iCnt+1)
      {     
             
          iSum = iSum + iCnt;  
      }
      return iSum;
}
int main()
{
      int iValue1 = 0;
      int iValue2 = 0;
      int iRet = 0;

      printf("Enter The Starting Point :");
      scanf("%d",&iValue1);

      printf("Enter The Ending Point :");
      scanf("%d",&iValue2);

     iRet = SumRangeDisplay(iValue1,iValue2);

     printf("Addition is %d\n ",iRet);

      return 0;
}