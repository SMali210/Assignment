#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#pragma pack(1)
struct node
{
      int data;
      struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertLast(PPNODE First,int no)
{
      PNODE newn = (PNODE)malloc(sizeof(NODE));
      newn->data = no;
      newn->next = NULL;
      PNODE temp = *First;
      if(*First==NULL)
      {
            *First = newn;
      }
      else
      {
            while(temp->next !=NULL)
            {
                  temp = temp->next;
            }

            temp->next = newn;
      }
     
}
void Display(PNODE First)
{
      printf("Elements Of Linked List are :\n");

      while(First!=NULL)
      {
            printf("| %d |->",First->data);
            First = First->next;
      }
      printf("NULL\n");
}

int SumDigit(int iNo)
{
      int iSum = 0;
      int iDigit = 0;

      while(iNo!=0)
      {
            iDigit = iNo % 10;
            iSum = iSum  + iDigit;
            iNo = iNo / 10;
      }
      return iSum;
}
void DisplayDigitSum(PNODE First)
{
      int iRet = 0;
      while(First!=NULL)
      {
            iRet = SumDigit(First->data);

            printf("Addition of Digit of The Number %d is %d\n",First->data,iRet);

            First = First->next;
      }
}

int main()
{
      PNODE Head = NULL;

      InsertLast(&Head,110);
      InsertLast(&Head,230);
      InsertLast(&Head,20);
      InsertLast(&Head,240);
      InsertLast(&Head,640);
      
      Display(Head);

    DisplayDigitSum(Head);

      return 0;
}