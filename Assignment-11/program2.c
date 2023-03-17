#include<stdio.h>

void EvenRangeDisplay(int iStart ,int iEnd)
{
      int iCnt = 0;

      for(iCnt = iStart;iCnt <=iEnd;iCnt=iCnt+1)
      {     
            if((iCnt % 2)==0)
            {
                   printf("%d\t",iCnt);
            }
           
      }
}
int main()
{
      int iValue1 = 0;
      int iValue2 = 0;

      printf("Enter The Starting Point :");
      scanf("%d",&iValue1);

      printf("Enter The Ending Point  :");
      scanf("%d",&iValue2);

      EvenRangeDisplay(iValue1,iValue2);

      return 0;
}