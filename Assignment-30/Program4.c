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
int MinimumDigit(int iNo)
{
      int iDigit = 0;
      int iMin = 9;

      while(iNo!=0)
      {
            iDigit = iNo % 10;

           if(iDigit < iMin)
           {
             iMin = iDigit;
           }

            iNo = iNo / 10;
      }
      return iMin;
}
void DisplaySmall(PNODE First)
{
      int Small = 0;

      while(First !=NULL)
      {
            Small = MinimumDigit(First->data);

            printf("| %d |->",Small);
      
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
      InsertLast(&Head,415);

      Display(Head);

      DisplaySmall(Head);

      return 0;
}