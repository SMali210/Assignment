#include<stdio.h>

void Pattern(int iNo)
{
      int iCnt = 0;

      if(iNo < 0)
      {
            iNo = -iNo;
      }

      for(iCnt = 1;iCnt <= iNo;iCnt++)
      {
          printf("%d\t",iCnt*2);
      }
}
int main()
{
      int ivalue = 0;

      printf("Enter The Number :");
      scanf("%d",&ivalue);

      Pattern(ivalue);

      return 0;
}