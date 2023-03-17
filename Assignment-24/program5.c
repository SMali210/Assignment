#include<stdio.h>

void Display(char ch)
{
      if(ch >= 'A' &&  ch <= 'Z')
      {
            printf(" %d\t %x\t %o\t",ch,ch,ch);
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