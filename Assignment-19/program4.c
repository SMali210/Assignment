#include<stdio.h>

void Pattern(int iRow ,int iCol)
{
      int i = 0;
      int j = 0;

     
      for(i = 1;i<iCol;i++)
      {
          for(j = 1;j<iRow; j++)
          {
             printf("*\t#\t");
          }
          printf("\n");
      }

}   
int main()
{
      int ivalue1 = 0;
      int ivalue2 = 0;

      printf("Enter The Number of Rows :");
      scanf("%d",&ivalue1);

      printf("Enter The  Number Columns :");
      scanf("%d",&ivalue2);

      Pattern(ivalue1,ivalue2);

      return 0;
}