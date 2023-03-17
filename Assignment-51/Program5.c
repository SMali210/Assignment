#include<stdio.h>
typedef unsigned int UINT;

//  
//1111     0      0      0     0      0       0   1111
//0000     0      0      0     0      0       0   0000  

UINT ToggleBit(UINT No)
{
      UINT iMask = 0XF000000F;
      UINT Result = 0;

    //  iMask = iMask <<(pos -1);
    
      Result = No ^ iMask;

      return Result;
}
int main()
{
      UINT Value = 0;
      UINT Ret = 0;

      printf("Enter The Number\n");
      scanf("%d",&Value);

      Ret = ToggleBit(Value);
      printf("Updated Bit is %d\n",Ret);

      return 0;
}