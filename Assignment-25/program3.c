 #include<stdio.h>

int Difference(char *str)
{
      int iCapital = 0;
      int iDiff = 0;
      int iSmall = 0;

      while(*str!='\0')
      {
            if((*str >= 'A')&& (*str <= 'Z'))
            {
                  iCapital++;
                  
            }
            else
            {
                  iSmall++;
            }
            str++;

            iDiff = iSmall - iCapital;
           
      }
      return iDiff;
}
int main()
{
      char arr[20];
      int iRet = 0;

      printf("Enter The String :");
      scanf(" %[^'\n']s",arr);

      iRet = Difference(arr);

      printf("%d\n",iRet);

      return 0;
}