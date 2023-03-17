#include<stdio.h>

void Display(int iRow ,int iCol)
{
      int i = 0 ,j = 0;
      int iNo1 = 1;
      int iNo2 = 1;

      for(i = 1;i <= iRow;i++)
      {
            
            for(j = 0;j < iCol;j++)
            {
                 if(iNo1 <= 9) 
                 {
                   printf("%d\t",iNo1);
                   
                 }
                 else
                 {
                    printf("%d\t",iNo2);
                    iNo2++;
                 }
                 iNo1++;
                      
                  
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