#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iSize)
{
      int iCnt = 0;
      int iMin = Arr[0];

      for(iCnt = 0;iCnt < iSize;iCnt++)
      {
           if(Arr[iCnt] < iMin)
           {

                  iMin = Arr[iCnt];
           }
      }
      return iMin;
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

   iRet = Minimum(ptr,iLength);

      printf("Minimum Number Of array is :%d\n",iRet);

      free(ptr);

      return 0;
}