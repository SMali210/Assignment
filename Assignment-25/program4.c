#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char *str)
{

      while(*str!='\0')
      {
           if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
           {
                
                  break;
           }
           str++;
      }
      if(*str == '\0')
      {
            return FALSE;
      }
      else
      {
            return TRUE;
      }

    
     
}
int main()
{
      char Arr [20];
      BOOL bRet = FALSE;

      printf("Enter The Character :");
      scanf("%[^ '\n']s",Arr);

      bRet = ChkVowel(Arr);

      if(bRet == TRUE)
      {
            printf("It Contains Vowel");
      }
      else
      {
            printf("There is No  Vowel ");
      }
      return 0;
}

