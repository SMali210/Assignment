#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
      int data;
      struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node **PPNODE;

void InsertLast(PPNODE First,int no)
{
      PNODE newn = (PNODE)malloc (sizeof(NODE));
      newn->data = no;
      newn->next = NULL;
      PNODE temp = *First;

      if(*First == NULL)
      {
            *First = newn;
      }
      else
      {
            while(temp->next !=NULL)
            {
                  temp = temp->next;;
            }

            temp->next = newn;
      }
}
void Display(PNODE First)
{
      printf("Elements Of Linked List Are :\n");
      
      while(First!=NULL)
      {
            printf("| %d |->",First->data);
            First = First->next;
      }
      printf("NULL\n");
}
int ReverseDigit(int iNo)
{
      int iDigit = 0;
      int iRev = 0;

      while(iNo!=0)
      {
            iDigit = iNo % 10;

            iRev = (iRev * 10)+iDigit;

            iNo = iNo / 10;
      }
      return iRev;
}
void DisplayReverse(PNODE First)
{
      int RevNode = 0;

      while(First !=NULL)
      {
            RevNode = ReverseDigit(First->data);

            printf("| %d |->",RevNode);

            First = First->next;

      }
      printf("NULL\n");

}
int main()
{
      PNODE Head = NULL;

      InsertLast(&Head,11);
      InsertLast(&Head,28);
      InsertLast(&Head,17);
      InsertLast(&Head,41);
      InsertLast(&Head,6);
      InsertLast(&Head,89);

      Display(Head);

      DisplayReverse(Head);

      return 0;
}