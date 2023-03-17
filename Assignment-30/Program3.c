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
int MultiplyDigit(int iNo)
{
      int iDigit = 0;
      int iMult = 1;

      while(iNo!=0)
      {
            iDigit = iNo % 10;

            iMult = iMult * iDigit;

            iNo = iNo / 10;
      }
      return iMult;
}
void DisplayProduct(PNODE First)
{
      int Product = 0;

      while(First !=NULL)
      {
            Product = MultiplyDigit(First->data);

            printf("| %d |->",Product);
      
            First = First->next;

      }
      printf("NULL\n");

}
int main()
{
      PNODE Head = NULL;

      InsertLast(&Head,11);
      InsertLast(&Head,20);
      InsertLast(&Head,32);
      InsertLast(&Head,41);

      Display(Head);

      DisplayProduct(Head);

      return 0;
}