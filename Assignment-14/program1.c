#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iSize)
{
      int iSumEven = 0 ,isumOdd = 0;
      int iCnt = 0 , iDiff = 0;

      for(iCnt = 0;iCnt < iSize;iCnt++)
      {
            if((Arr[iCnt] % 2)==0)
            {
                  iSumEven = iSumEven + Arr[iCnt];
            }
            else
            {
                  isumOdd = isumOdd + Arr[iCnt];
            }

            iDiff = iSumEven - isumOdd;

      }
      return iDiff;
      
}

int main()
{
      int *ptr = NULL ,  iLength = 0;
      int iCnt = 0 ,  iRet = 0;

      printf("Enter Numbers of Elements :");
      scanf("%d",&iLength);

      ptr = (int *)malloc(iLength * sizeof(int));

      if(ptr == NULL)
      {
            printf("Unable to allocate Memory  :");
            return -1;
      }

      printf("Enter the elements \n");

      for(iCnt = 0;iCnt < iLength;iCnt++)
      {
            scanf("%d",&ptr[iCnt]);
      }

      iRet = Difference(ptr,iLength);

      printf("Result is %d\n",iRet);

      free(ptr);

      return 0;

}