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
int MaximumDigit(int iNo)
{
      int iDigit = 0;
      int iMax = 0;

      while(iNo!=0)
      {
            iDigit = iNo % 10;

           if(iDigit > iMax)
           {
             iMax = iDigit;
           }

            iNo = iNo / 10;
      }
      return iMax;
}
void DisplayLargest(PNODE First)
{
      int Largest = 0;

      while(First !=NULL)
      {
            Largest = MaximumDigit(First->data);

            printf("| %d |->",Largest);
      
            First = First->next;

      }
      printf("NULL\n");

}
int main()
{
      PNODE Head = NULL;

      InsertLast(&Head,11);
      InsertLast(&Head,250);
      InsertLast(&Head,532);
      InsertLast(&Head,419);

      Display(Head);

      DisplayLargest(Head);

      return 0;
}