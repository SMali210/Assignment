#include<stdio.h>

void Display(int iRow,int iCol)
{
      int i = 0 ,j = 0;
      char ch  = 'A';

      for(i  = 1;i<=iRow;i++)
      {
            for(j = 1;j<=iCol;j++)
            {
                  printf("%c\t",ch);
                  
            }
            ch++;
            printf("\n");
      }     
     
}
int main()
{
      int ivalue1 = 0;
      int ivalue2 = 0;

      printf("Enter The Nunmber Row :");
      scanf("%d",&ivalue1);

      printf("Enter The Nunmber Row :");
      scanf("%d",&ivalue2);


  
      Display(ivalue1,ivalue2);

      return 0;
}