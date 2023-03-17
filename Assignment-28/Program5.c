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
int Minimum(PNODE First )
{
      int iMin = 0;
      iMin = First->data;

      if(*First == NULL)
      {
            printf("Node Are Empty \n");
            return 0;
      }
      
      while(First !=NULL)
      {
            if(First->data < iMin)
            {
                  iMin = First->data;
            }

            First = First->next;
      }
      return iMin;
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

      InsertLast(&Head,110);
      InsertLast(&Head,230);
      InsertLast(&Head,20);
      InsertLast(&Head,240);
      Display(Head);

      iRet = Minimum(Head);
      printf("Minimum no is :%d\n",iRet);
      
      return 0;
}