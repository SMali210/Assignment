#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
// 0000   0000   0000   0000  0000   0000   0000   0000  
// 1111   1111   1111   1111  1111   1111   1011   1111
//  F      F      F       F     F     F      B      F
//0XFFFFFFBF
UINT OFFBit(UINT No)
{
      UINT iMask =  0XFFFFFFBF;
      UINT Result = 0;

      Result = No & iMask;

      return Result;
     
}
int main()
{
      UINT Value = 0;
      UINT Ret = 0;

      printf("Enter The Number \n");
      scanf("%d",&Value);
      
      Ret = OFFBit(Value);

     printf("Updated Number is %d\n",Ret);
      return 0;
}