#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT No,UINT pos)
{
      UINT iMask = 0X00000001;
      UINT Result = 0;

      iMask = iMask <<(pos -1);
    
      Result = No ^ iMask;

      return Result;
}
int main()
{
      UINT Value = 0;
      UINT Position = 0;
      UINT Ret = 0;

      printf("Enter The Number\n");
      scanf("%d",&Value);

      printf("Enter The Position\n");
      scanf("%d",&Position);

      Ret = ToggleBit(Value,Position);
      printf("Updated Bit is %d\n",Ret);

      return 0;
}