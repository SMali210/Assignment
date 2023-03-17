#include<stdio.h>

int DollarToINR(int iNo)
{
      int Ans = 0;
      Ans = iNo * 70;
      return Ans;
}
int main()
{
      int iValue = 0;
      int iRet = 0;

      printf("Enter The Number of USD :");
      scanf("%d",&iValue);

      iRet = DollarToINR(iValue);

      printf("Value in INR is %d\n ",iRet);

      return 0;
}