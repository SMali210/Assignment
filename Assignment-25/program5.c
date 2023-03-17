#include<stdio.h>

void ReversX(char *str)
{
    char *start = str;
    char *end = str;
    char tempt = '\0';
      

      while(*end!='\0')
      {
            end++;
      }
      end--;

      while(start < end)
      {
            tempt = *start;
            *start = *end;
            *end = tempt;

            start++;
            end--;
      }
}
int main()
{
      char arr[20];
     

      printf("Enter The String :\n");
      scanf(" %[^'\n']s",arr);

      ReversX(arr);

      printf("Modified string is : %s ",arr);

      return 0;
}