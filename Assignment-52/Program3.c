#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
//  0000   0000   0000  0000  0000   1001   0000   0000
 //   0       0     0     0     0      9       0      0
bool CheckBit(UINT No)
{
      UINT iMask =  0X00000900;
      UINT Result = 0;

      Result = No | iMask;

      if(Result == iMask)
      {
            return true;
      }
      else
      {
            return false;
      }
}
int main()
{
      UINT Value = 0;
      bool bRet = false;

      printf("Enter The Number\n");
      scanf("%d",&Value);

      bRet = CheckBit(Value);

      if(bRet == true)
      {
            printf("9th And 12th Bit is ON\n");
      }
      else
      {
            printf("9th And 12th Bit is OFF\n");
      }

      return 0;
}