#include<stdio.h>

int SumDigit(int iNo)
{
     static int iSum = 0;
     static int iDigit = 0;

      if(iNo !=0)
      {
            iDigit = iNo % 10;

            iSum = iSum + iDigit;

            iNo = iNo / 10;

            SumDigit(iNo);
      }
      return iSum;
}
int main()
{
      int Value = 0;
      int Ret = 0;

      printf("Enter the number :\n");
      scanf("%d",&Value);

      Ret =  SumDigit(Value);
      printf("Summation of Digit is : %d\n",Ret);

      return 0;
}