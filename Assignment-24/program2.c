#include<stdio.h>

void Display(char ch)
{
      if(ch >= 'A' &&  ch <= 'Z') 
      {
            printf("%c\t",ch + 32);
      }
      else if(ch >= 'a' &&  ch <= 'z')
      {
            printf("%c\t",ch - 32);
      }
      else
      {
            printf("%c\t",ch);
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