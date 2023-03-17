#include<stdio.h>

int Percentage(int Tmarks ,int Omarks)
{
      float Percentage = 0.0;
      Percentage =  (Omarks / Tmarks ) * 100.0;

      return Percentage;
}
int main()
{
      int iValue1 = 0,iValue2 = 0;
      float fRet = 0.0;

      printf("Enter The Total Marks : ");
      scanf("%d",&iValue1);

      printf("Enter The Obtained Marks :");
      scanf("%d",&iValue2);

      fRet = Percentage(iValue1,iValue2);

      printf("Total Percentage  : %.2f\n",fRet);

      return 0;
}