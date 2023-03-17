#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
      int data;
      struct node *next;
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
            while(temp->next!=NULL)
            {
                  temp = temp->next;
            }

            temp->next = newn;
      }

}
int Addition(PNODE First )
{
      int iSum = 0;
      while(First !=NULL)
      {
            iSum = iSum + First->data;
            First = First->next;
      }
      return iSum;
}
void Display(PNODE First)
{
      printf("Elements of LikedList are:\n");

      while(First!=NULL)
      {
            printf("| %d |->",First->data);

            First = First->next;
      }
      printf("NULL\n");
}
int main()
{
      PNODE Head = NULL;
      int iRet = 0;

      InsertLast(&Head,10);
      InsertLast(&Head,20);
      InsertLast(&Head,30);
      InsertLast(&Head,40);
      Display(Head);

      iRet = Addition(Head);
      printf("Addition is :%d\n",iRet);
      
      return 0;
}