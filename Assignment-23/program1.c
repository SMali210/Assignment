#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkAlpha(char ch)
{

      if(((ch>='A')|| ch >='a')&&((ch <= 'Z')|| ch<='z'))
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

      printf("Enter the character :");
      scanf("%c",&Cvalue);

    bRet = ChkAlpha(Cvalue);

      if(bRet == TRUE)
      {
            printf("It is character");
      }
      else
      {
            printf("It is not character ");
      }

      return 0;
}