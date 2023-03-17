#include<stdio.h>

int RevDigit(int iNo)
{
     static int iRev = 0;
     static int iDigit = 0;

      if(iNo !=0)
      {
            iDigit = iNo % 10;

            iRev = (iRev * 10) + iDigit;
            iNo = iNo / 10;

            RevDigit(iNo);
      }
      return iRev;
}
int main()
{
      int Value = 0;
      int Ret = 0;

      printf("Enter the number :\n");
      scanf("%d",&Value);

      Ret =  RevDigit(Value);
      printf(" Minimum Digit is : %d\n",Ret);

      return 0;
}