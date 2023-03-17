#include<stdio.h>

int ProductDigit(int iNo)
{
     static int iPro = 1;
     static int iDigit = 0;

      if(iNo !=0)
      {
            iDigit = iNo % 10;

            iPro = iPro * iDigit;

            iNo = iNo / 10;

            ProductDigit(iNo);
      }
      return iPro;
}
int main()
{
      int Value = 0;
      int Ret = 0;

      printf("Enter the number :\n");
      scanf("%d",&Value);

      Ret =  ProductDigit(Value);
      printf("Product of Digit is : %d\n",Ret);

      return 0;
}