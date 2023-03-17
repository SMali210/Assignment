#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChekCapital(char ch)
{
      if((ch>='A')&&(ch<='Z'))
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

      bRet = ChekCapital(Cvalue);

      if(bRet== TRUE)
      {
            printf("It is Capital Character ");
      }
      else
      {
            printf("It is Not Capital Character");
      }

      return 0;
}