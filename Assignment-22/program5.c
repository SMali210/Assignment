#include<stdio.h>

void Pattern(int iRow ,int iCol)
{
      int i =0 , j = 0;

       
      for(i = 1; i <= iRow; i++)
      {
            for(j = 1; j <= iCol; j++)
            {
                  if((j==1)||(j==iCol))
                  {
                        printf("%d\t",j);
                  }
                  else if(i==j)
                  {
                        printf("*\t");
                  }
                  else 
                  {
                        printf("%d\t",j);
                  }
                   
            }

           printf("\n");
      }
}
int main()
{
      int iValue1 = 0 ,iValue2 = 0;

      printf("Enter The Number of Row :");
      scanf("%d",&iValue1);

      printf("Enter The Number Of Column :");
      scanf("%d",&iValue2);

      Pattern(iValue1,iValue2);

      return 0;
}