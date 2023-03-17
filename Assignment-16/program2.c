#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int FirstOcc(int Arr[],int iSize,int iNo)
{
      int iCnt = 0;
      int iPos = -1;
      
      for(iCnt=0;iCnt < iSize;iCnt++)
      {
            if(Arr[iCnt]==iNo)
            {
                 iPos = iCnt;
            }
            
      }
      return iPos;
     
}
int main()
{
      int iLength = 0 ,iCnt = 0 ;
      int *P = NULL;
      int iRet = 0;
      int iValue = 0;

      printf("Enter Numbers Of Elements :");
      scanf("%d",&iLength);

      P = (int *)malloc(iLength * sizeof(int));

      if(P == NULL)
      {
            printf("Unable to allocate Memory:");
            return -1;
      }
      printf("Enter The Elements :\n");

      for(iCnt = 0;iCnt < iLength;iCnt++)
      {
            scanf("%d",&P[iCnt]);
      }

      printf("Enter The Number To Findout The Frquency :");
      scanf("%d",&iValue);

      iRet = FirstOcc(P,iLength,iValue);

   if(iRet == -1)
    {
        printf("There is no %d in the array\n",iValue);
    }
    else
    {
         printf("%d is occured in the array at First index %d\n",iValue,iRet);
    }
     
     free(P);

      return 0;

}