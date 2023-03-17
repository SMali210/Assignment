#include<stdio.h>

void DisplayConvert(char ch)
{
      if((ch >= 'A')&&(ch <= 'Z'))
      {
          ch =  ch + 32;
            printf("%c\n",ch);
      }
      else if((ch >='a')&&(ch <= 'z'))
      {
          ch =  ch - 32;
            printf("%c\n",ch);
      }
}
int main()
{
      char cValue = 0;
      printf("Enter the Character :");
      scanf("%c",&cValue);

      DisplayConvert(cValue);

      return 0;
}