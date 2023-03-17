#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
// 0000   1000   0001   0000  0100   0000   0100   0000  
//  0      8      1      0     4       0       4      0
// 0X08104040
bool CheckBit(UINT No)
{
      UINT iMask =  0X08104040;
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
            printf("7th ,15,21 & 28th Bit is ON \n");
      }
      else
      {
          printf("7th ,15,21 & 28th Bit is OFF \n");
      }

      return 0;
}