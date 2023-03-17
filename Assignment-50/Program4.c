#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
// 0000   0000   0000   0000  0000   0010   0100   0000  
//  0      0      0      0     0      2      4      0
// 0000   0000   0000   0000  0000   0000   0000   0000
// 
//0X00000240
UINT ToggleBit(UINT No)
{
      UINT iMask =  0X00000240;
      UINT Result = 0;

      Result = No ^ iMask;

      return Result;
     
}
int main()
{
      UINT Value = 0;
      UINT Ret = 0;

      printf("Enter The Number \n");
      scanf("%d",&Value);
      
      Ret = ToggleBit(Value);

     printf("Updated Number is %d\n",Ret);
      return 0;
}