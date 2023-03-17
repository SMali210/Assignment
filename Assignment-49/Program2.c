#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
// 0000   0000   0000   0010  0000   0000   0001   0000  
//  0      0      0      2     0     0        1      0
// 0X00020010
bool CheckBit(UINT No)
{
      UINT iMask =  0X00020010;
      UINT Result = 0;

      Result = No & iMask;

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

      printf("Enter The Number \n");
      scanf("%d",&Value);
      
      bRet = CheckBit(Value);

      if(bRet == true)
      {
            printf("5th & 18thBit is ON \n");
      }
      else
      {
            printf("5th & 18th Bit is OFF \n");
      }

      return 0;
}