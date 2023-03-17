#include<stdio.h>
#include<stdbool.h>

// 0000   0000  0000  0000  0000   0000   0000   0001

typedef unsigned int UINT;

bool CheckBit(UINT  No,UINT Pos)
{
      UINT iMask = 0X00000001;  // iMask = 1;
      UINT Result = 0;

      if((Pos < 1)||(Pos > 32))
      {

            printf("Invalid Bit Position\n");
            return false;
      }

      iMask = iMask <<(Pos -1);  // Dynamic masking

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
      UINT Position = 0;
      bool bRet = false;

      printf("Enter The Number \n");
      scanf("%d",&Value);

      printf("Enter The Position\n");
      scanf("%d",&Position);

      bRet = CheckBit(Value,Position);

      if(bRet==true)
      {
            printf("TRUE");
      }
      else
      {
           printf("FALSE");
      }

      return 0;
}