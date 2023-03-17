#include<stdio.h>

int MinDigit(int iNo)
{
     static int iMin = 9;
     static int iDigit = 0;

      if(iNo !=0)
      {
            iDigit = iNo % 10;

            if(iDigit < iMin)
            {
                  iMin = iDigit;
            }
            iNo = iNo / 10;

            MinDigit(iNo);
      }
      return iMin;
}
int main()
{
      int Value = 0;
      int Ret = 0;

      printf("Enter the number :\n");
      scanf("%d",&Value);

      Ret =  MinDigit(Value);
      printf(" Minimum Digit is : %d\n",Ret);

      return 0;
}