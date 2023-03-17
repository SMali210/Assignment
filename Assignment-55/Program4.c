#include<stdio.h>

int Fact(int iNo)
{
      static int iFact = 1;
      static int iCnt = 1;

      if(iCnt <= iNo)
      {
            iFact = iFact * iCnt;
            iCnt++;

            Fact(iNo);
      }
      return iFact;
      
}
int main()
{
      int Value = 0;
      int iRet = 0;

      printf("Enter The Number : \n");
      scanf("%d",&Value);

      iRet = Fact(Value);

      printf("%d\n",iRet);

      return 0;
}