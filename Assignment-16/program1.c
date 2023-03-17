#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check(int Arr[],int iSize,int iNo)
{
      int iCnt = 0;
      
      for(iCnt=0;iCnt < iSize;iCnt++)
      {
            if(Arr[iCnt]==iNo)
            {
                  break;
            }
      }
      if(iCnt == iSize)
      {
            return FALSE;
      }
      else
      {
            return TRUE;
      }
     
}
int main()
{
      int iLength = 0 ,iCnt = 0 ;
      int *P = NULL;
      BOOL bRet = FALSE;
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

      bRet = Check(P,iLength,iValue);

     if(bRet == TRUE)
     {
        printf("Number is Present");
     }
     else
     {
        printf("Number is Absent");
     }

     free(P);

      return 0;

}