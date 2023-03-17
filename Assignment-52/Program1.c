#include<stdio.h>
typedef unsigned int UINT;

// 0000  0000  0000   0000  0000   0000   0010   0000   0000
// 0       0     0     0     0       0      2      0      0
UINT CountOne(UINT iNo)
{
      UINT icnt = 0;
      UINT iMask = 0X00000020;
      UINT Result  = 0;
      Result = iNo | iMask;

      icnt = icnt + Result;
      return icnt;
}
int main()
{
      UINT Value = 0;
      UINT Ret  = 0;

      printf("Enter The Number :\n");
      scanf("%d",&Value);

      Ret = CountOne(Value);

      printf("Count ON Bit ia %d\n",Ret);

      return 0; 

}