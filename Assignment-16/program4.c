#include<stdio.h>
#include<stdlib.h>


void Range(int Arr[], int iSize, int iStart,int iEnd)
{
    int iCnt =0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
            
            if((Arr[iCnt]>iStart) &&(Arr[iCnt]<iEnd))
            {


                 printf(" %d\t",Arr[iCnt]);

            }
    }
    
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iValue1 = 0,iValue2 = 0, iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    printf("Enter the Starting Point:");
    scanf("%d",&iValue1);

   printf("Enter the Ending Point:");
    scanf("%d",&iValue2);
    
    ptr = (int *)malloc(iLength * sizeof(int));

    
    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    Range(ptr, iLength, iValue1,iValue2);
   

    free(ptr);

    return 0;
}