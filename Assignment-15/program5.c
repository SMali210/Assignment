#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize,int iNo)
{
      int iCnt = 0;
      int Frequency = 0;

      for(iCnt = 0;iCnt < iSize;iCnt++)
      {
            if(Arr[iCnt]== iNo)
            {
                  Frequency++;
            }
      }
      return Frequency;
}
int main()
{
      int iLength = 0,iRet = 0,i = 0;
      int *ptr = NULL;
      int iValue = 0;

      printf("Enter the Number :");
      scanf("%d",&iLength);

      ptr = (int *)malloc(iLength * sizeof(int));

      printf("Enter the Numbers of Element \n");

      for(i = 0;i < iLength;i++)
      {
            scanf("%d",&ptr[i]);
      }

      printf("Enter the Number to Findout The Frequency\n");
      scanf("%d",&iValue);

      iRet = Frequency(ptr,iLength,iValue);

      printf("Result %d\n",iRet);

      free(ptr);

      return 0;
}