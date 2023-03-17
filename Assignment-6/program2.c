#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
      if(iNo > 100)
      {
            return TRUE;
      }
      else
      {
            return FALSE;
      }
}

int main()
{
      int iValue = 0;
      BOOL bRet = FALSE;

      printf("Enter the Number : ");
      scanf("%d",&iValue);

      bRet = ChkGreter(iValue);

      if(bRet == TRUE)
      {
            printf("Number is Greater Than 100 :");
      }
      else
      {
            printf("Number is Smaller Than 100 :");

      }

      return 0;
}