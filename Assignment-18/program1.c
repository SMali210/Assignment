#include<stdio.h>

void Pattern(int iNo)
{
      char ch = 'A';
      int iCnt = 0;

      if(iNo < 0)
      {
            iNo = -iNo;
      }

      for(iCnt=0;iCnt<iNo;iCnt++)
      {
            printf("%c\t",ch);
            ch++;
      }
}
int main()
{
      int ivalue = 0;

      printf("Enter the number :");
      scanf("%d",&ivalue);

      Pattern(ivalue);

      return 0;
}