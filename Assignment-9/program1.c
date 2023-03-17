
#include<stdio.h>

void Display(int iNo)
{
      int icnt = 0;

      for(icnt = 0; icnt<=iNo;icnt++)
      {
          printf("*\t");
      }

      for(icnt = 0;icnt<=iNo;icnt++)
      {
            printf("#\t");
      }
}
int main()
{
      int iValue = 0;
      printf("Enter The Number : ");
      scanf("%d",&iValue);

      Display(iValue);

      return 0;
}