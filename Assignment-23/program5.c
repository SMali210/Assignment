#include<stdio.h>

void DisplaySchedule(char chDiv)
{
      if(chDiv == 'A')
      {
            printf("Your exam at 7am");
      }
      if(chDiv == 'B')
      {
            printf("Your exam at 8.30Am");
      }
      if(chDiv == 'C')
      {
            printf("Your exam at 9.30AM");
      }
      if(chDiv == 'D')
      {
            printf("Your exam at 10.30AM");
      }

}
int main()
{
      char Cvalue = '\0';

      printf("Enter Your Division :");
      scanf("%c",&Cvalue);

      DisplaySchedule(Cvalue);

      return 0;
}