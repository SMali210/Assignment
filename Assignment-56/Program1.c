#include<stdio.h>

int WhiteSpace(char *str)
{
     static int iCnt = 0;

     if(*str !='\0')
     {
            if(*str ==' ')
            {
                  iCnt++;
            }

            str++;

            WhiteSpace(str);
     }
     return iCnt;
}
int main()
{
      int iRet = 0;
      char Arr[20];

      printf("Enter the string : \n");
      scanf("%[^'\n]s",Arr);

      iRet = WhiteSpace(Arr);

      printf("%d\n",iRet);

      return 0;
}