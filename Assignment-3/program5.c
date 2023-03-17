#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char ch)
{
     
      if((ch =='a')||(ch =='e')||(ch =='i')||(ch =='o')||(ch =='u'))
      {
          return true;
      }
      else 
      {
         return false;
      }
}
int main()
{
      char cValue = 0;
      bool bRet = false;
      printf("Enter the Character :");
      scanf("%c",&cValue);

      bRet = CheckVowel(cValue);

      if(bRet == true)
      {
            printf("TRUE");
      }
      else
      {
            printf("FALSE");
      }

      return 0;
}