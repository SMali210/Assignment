#include<stdio.h>

void DisplayASCII()
{
      int i = 0;

      printf("___________________________________________________\n");
      printf("ASCII Value \n");
      printf("___________________________________________________\n");



      for(i = 0;i<=127;i++)
      {
            printf("%c \t %d \t %x \t %o\t ",i,i,i,i);
      }

      printf("\n___________________________________________________\n");

}

int main()
{
      DisplayASCII();

      return 0;
}