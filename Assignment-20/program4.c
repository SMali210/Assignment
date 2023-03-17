#include<stdio.h>

void Display(int iRow , int iCol)
{
      int i =0 ,j =0;

      for(i = iRow; i >= 1;i--)
      {
            for(j = 1;j <= iCol;j++)
            {
                  if((i==1)||(i==iRow))
                  {
                        printf("%d\t",i);
                  }
                  else if(i <= iRow)
                  {
                        printf("%d\t",i);
                  }
                 
            }

            printf("\n");
      }
}
int main()
{
      int ivalue1 , ivalue2 = 0;

      printf("Enter the number of Row :");
      scanf("%d",&ivalue1);

      printf("Enter The number of colum :");
      scanf("%d",&ivalue2);

      Display(ivalue1 ,ivalue2);

      return 0;
}