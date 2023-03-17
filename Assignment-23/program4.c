#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckSmall(char ch)
{
      if((ch >= 'a') && (ch <= 'z'))
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

      bRet = CheckSmall(Cvalue);

      if(bRet== TRUE)
      {
            printf("It is SmallCharacter ");
      }
      else
      {
            printf("It is Not Small Character");
      }

      return 0;
}