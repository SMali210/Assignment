#include<stdio.h>

void Display(char ch)
{
      int iCnt = 0;
      if(ch>= 'a' && ch<= 'z')
      {
            for(iCnt = ch;iCnt>='a';iCnt--)
            {
                  printf("%c\t",iCnt);
            }
      }
      else if(ch>='0' && ch<='9')
      {
            return;
      }
      else
      {
            for(iCnt = ch;iCnt<='Z';iCnt++)
            {
                  printf("%c\t",iCnt++);
            }
      }
}
int main()
{
      char Cvalue = '\0';
      

      printf("Enter The Character :");
      scanf("%c",&Cvalue);

      Display(Cvalue);

      return 0;
}