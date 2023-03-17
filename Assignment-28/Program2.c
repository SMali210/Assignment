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
int ChkLastOcc(PNODE First,int iNo)
{
      int iCnt = 0;
      int i = 0;
      for(i = 1;i<First !=0;i++)
      {
            if(First->data == iNo)
            {
                  iCnt = i;
                 
            }
            First = First->next;
      }
      return iCnt;
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
      int iValue = 0;

      InsertLast(&Head,10);
      InsertLast(&Head,20);
      InsertLast(&Head,30);
      InsertLast(&Head,40);
      InsertLast(&Head,50);
      InsertLast(&Head,30);
      InsertLast(&Head,70);
      Display(Head);

    printf("Enter the element to findout the Last occurance : \n");
    scanf("%d",&iValue);

   iRet =  ChkLastOcc(Head,iValue);
   printf("Position Of ThatElement %d\n",iRet);
     
      return 0;
}