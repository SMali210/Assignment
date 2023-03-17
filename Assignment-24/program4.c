#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkSpecial(char ch)
{
     if((ch >= 33) && (ch <= 47))
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

      printf("Enter The Character :");
      scanf("%c",&Cvalue);

      bRet = ChkSpecial(Cvalue);

      if(bRet == TRUE)
      {
            printf("It is Special Character");
      }
      else
      {
            printf("it is Not Special Character ");
      }
      return 0;
}

