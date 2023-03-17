#include<stdio.h>
#include<stdlib.h>

int Differnce(int Arr[],int iSize)
{
      int iCnt = 0;
      int iMin = Arr[0] , iMax = Arr[0];
      int iDiff = 0;

      for(iCnt = 0;iCnt < iSize;iCnt++)
      {
           if(Arr[iCnt] > iMax)
           {

                  iMax = Arr[iCnt];
           }
          else if(Arr[iCnt] < iMin)
           {
                  iMin = Arr[iCnt];
           }

           iDiff = iMax - iMin;
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

   iRet = Differnce(ptr,iLength);

      printf("Differnce is :%d\n",iRet);

      free(ptr);

      return 0;
}