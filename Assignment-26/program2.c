#include<stdio.h>

void strupprx(char *str)
{
     while(*str!='\0')
      {
           if((*str >= 'a') && (*str <= 'z'))
           {
                  *str = *str - 32;

           }
           str++;
            
      }
      
}
int main()
{
      char arr[20];
     
      printf("Enter The String :");
      scanf("%[^'\n']s",arr);

      strupprx(arr); 

     printf("Modified string is %s ",arr);

      return 0;
}