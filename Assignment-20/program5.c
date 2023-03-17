#include<stdio.h>

void Display(int iRow ,int iCol)
{
      int i = 0 ,j = 0;
      int No = 1;

      for(i = 1;i <= iRow;i++)
      {
            
            for(j = 0;j < iCol;j++)
            {
                 if(j < No) 
                 {
                   printf("%d\t",No);
                   No++;
                 }
                      
                  
            }

            printf("\n");
      }
}

int main()
{
      int ivalue1 = 0;
      int ivalue2 = 0;

      printf("Enter The Nunmber Row :");
      scanf("%d",&ivalue1);

      printf("Enter The Number of Colum :");
      scanf("%d",&ivalue2);

      Display(ivalue1,ivalue2);

      return 0;
}