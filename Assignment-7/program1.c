#include<stdio.h>

void Patter(int iNo)
{
      int iCnt = 0;

      if(iNo < 0)
      {
            iNo = -iNo;
      }

      for(iCnt = 1;iCnt <=iNo;iCnt++)
      {
            printf("$ * ");
      }
}
int main()
{
      int iValue = 0;

      printf("Enter The Number :");
      scanf("%d",&iValue);

      Patter(iValue);

      return 0;
}