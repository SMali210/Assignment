#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChekZero(int iNo)
{
      int iDigit = 0;
      int iCnt = 0;

      while(iNo!=0)
      {
            iDigit = iNo % 10;

            iNo = iNo / 10;

            iCnt++;  
            
            if(iCnt == 0)
            {
                  return TRUE;
            }
            else
            {
                  return FALSE;
            }
      }
     
      
     
}
int main()
{
      int ivalue = 0;
      BOOL bRet = FALSE;

      printf("Enter the Number :");
      scanf("%d",&ivalue);

    bRet = ChekZero(ivalue);

    if(bRet == TRUE)
    {
      printf("It canatain zero");
    }
    else
    {
      printf("There is no Zero");
    }

      return 0;
}