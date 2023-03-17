#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
// 1000   0000   0000   0000  0000   0000   0000   0001  
//  8      0      0      0     0      0      0     1
// 0X80000001
bool CheckBit(UINT No)
{
      UINT iMask = 0X80000001;
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
            printf("1th and 32th Bit is ON \n");
      }
      else
      {
          printf("1th and 32th Bit is OFF \n");
      }

      return 0;
}