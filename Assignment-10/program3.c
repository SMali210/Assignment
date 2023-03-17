#include<stdio.h>

int KmToMeter(int iNo)
{
   int Meter = 0;
    Meter = iNo * 1000;

    return Meter;

}
int main()
{
      int  iValue = 0;
      int iRet = 0;

      printf("Enter The Kilometer :");
      scanf("%d",&iValue);

      iRet = KmToMeter(iValue);

      printf("Meter  %d\n :",iRet);

      return 0;
}