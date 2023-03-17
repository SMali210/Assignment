#include<stdio.h>

int Strlen(char *str)
{
     static int iCnt = 0;

     if(*str !='\0')
     {
            iCnt++;

            str++;

            Strlen(str);
     }
     return iCnt;
}
int main()
{
      int iRet = 0;
      char Arr[20];

      printf("Enter the string : \n");
      scanf("%s",Arr);

      iRet = Strlen(Arr);

      printf("%d\n",iRet);

      return 0;
}