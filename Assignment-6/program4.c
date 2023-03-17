#include<stdio.h>

int Multiplay(int iNo1,int iNo2,int iNo3)
{
     
      int Ans = 1;
      Ans = iNo1 * iNo2 * iNo3;
      if(Ans== 0)
      {
            return 1;
      }

      return Ans;
}
int main()
{
      int iValue1 = 0,iValue2 = 0,iValue3 = 0;
      int iRet = 0;
      printf("Please Enter the Three Number \n");
      scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

      iRet = Multiplay(iValue1,iValue2,iValue3);

      printf("Multiplay of Threes Number are %d\n",iRet);

      return 0;
}