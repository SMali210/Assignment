#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChekDigit(char ch)
{
      if((ch >= '0')&&(ch <= '9'))
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
      char Cvalue = '\0';
      BOOL bRet = FALSE;

      printf("Enter The  Capital Character :");
      scanf("%c",&Cvalue);

      bRet = ChekDigit(Cvalue);

      if(bRet== TRUE)
      {
            printf("It is DIgit");
      }
      else
      {
            printf("It is Not Digit");
      }

      return 0;
}