#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check(int Arr[],int iSize)
{
      int iCnt = 0;
      
      
      for(iCnt = 0;iCnt<iSize;iCnt++)
      {
            if(Arr[iCnt] == 11)
            {
                 
                 return TRUE;
            }
            else
            {
                  return FALSE;
            }
            
      }
     
}
int main()
{
      int iLength = 0 ,iCnt = 0 ;
      int *P = NULL;
      BOOL bRet = FALSE;

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

      bRet = Check(P,iLength);

      if(bRet == TRUE)
      {
            printf("11 is present");
      }
      else
      {
            printf("11 is absent");
      }
      
      free(P);

      return 0;

}