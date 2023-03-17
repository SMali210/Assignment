#include<stdio.h>

void strDigit(char *str)
{
     
      while(*str!='\0')
      {
            if(*str >= '0' && *str<= '9')
            {
                printf("%c\t",*str);
                
            }
            str++;
            
      }
}    
int main()
{
      char arr[20];
   
      printf("Enter The String :");
      scanf(" %[^'\n']s",arr);

      strDigit(arr);

      
      return 0;
}