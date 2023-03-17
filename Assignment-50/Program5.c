#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
// 0000   0000   0000   0000  0000   0000   0000   0000  
// 0000   0000   0000   0000  0000   0000   0000   1111  
//  0      0      0      0     0     0      0      F
//0XFFFFFDBF
UINT ONBit(UINT No)
{
      UINT iMask =  0X0000000F;
      UINT Result = 0;

      Result = No | iMask;

      return Result;
     
}
int main()
{
      UINT Value = 0;
      UINT Ret = 0;

      printf("Enter The Number \n");
      scanf("%d",&Value);
      
      Ret = ONBit(Value);

     printf("Updated Number is %d\n",Ret);
      return 0;
}