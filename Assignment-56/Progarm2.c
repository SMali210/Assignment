#include<stdio.h>

int MaxDigit(int iNo)
{
     static int iMax = 0;
     static int iDigit = 0;

      if(iNo !=0)
      {
            iDigit = iNo % 10;

            if(iDigit > iMax)
            {
                  iMax = iDigit;
            }
            iNo = iNo / 10;

            MaxDigit(iNo);
      }
      return iMax;
}
int main()
{
      int Value = 0;
      int Ret = 0;

      printf("Enter the number :\n");
      scanf("%d",&Value);

      Ret =  MaxDigit(Value);
      printf(" Maximum Digit is : %d\n",Ret);

      return 0;
}