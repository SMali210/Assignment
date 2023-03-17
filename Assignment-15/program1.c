#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iSize)
{
      int iCnt = 0;
      int iEven = 0;

      for(iCnt = 0;iCnt<iSize;iCnt++)
      {
            if((Arr[iCnt] % 2)== 0)
            {
                  iEven++;
            }

      }
      return iEven;
}
int main()
{
      int iLength = 0 ,iCnt = 0 , iRet = 0;
      int *p = NULL;

      printf("Enter Numbers Of Elements :");
      scanf("%d",&iLength);

      p = (int *)malloc(iLength * sizeof(int));

      if(p == NULL)
      {
            printf("Unable to allocate Memory:");
            return -1;
      }
      printf("Enter The Elements :\n");

      for(iCnt = 0;iCnt < iLength;iCnt++)
      {
            scanf("%d",&p[iCnt]);
      }

      iRet = CountEven(p,iLength);

      printf("Result %d\n :",iRet);

      free(p);

      return 0;

}