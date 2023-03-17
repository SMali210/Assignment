#include<stdio.h>
#include<stdlib.h>

int DigitSum(int iNo)
{
      int iSum =0;
      int iDigit = 0;
      
      while(iNo !=0)
      {
            iDigit = iNo % 10;

            iSum = iSum + iDigit;

            iNo = iNo /10;
      }
      return iSum;
}
void ArrayDigitSum(int Arr[],int iSize)
{
      int iRet = 0;
      int iCnt = 0;
      for(iCnt =0;iCnt<iSize;iCnt++)
      {
            iRet = DigitSum(Arr[iCnt]);
            printf("Summation of Digit is :%d\n",iRet);
      }
}
int main()
{
     int *ptr = NULL ,  iLength = 0;
      int iCnt = 0 ;

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

      ArrayDigitSum(ptr,iLength);


      free(ptr);

      return 0;
}