#include <stdio.h>
struct node
{
    struct node *next;
    int data;
};
struct node *start=NULL;
struct node *deleteFirst();
struct node *deleteLast();
struct node *deletAll();

struct node *iNsert(int data)
{
 struct node *new_node,*ptr;
 new_node=(struct node*)malloc(sizeof(struct node));
 new_node->data=data;
 new_node->next=NULL;

  if(start==NULL)
  {
            start=new_node;
  }
  else
  {
      ptr=start;
      while(ptr->next!=NULL)
      {
          ptr=ptr->next;

      }
      ptr->next=new_node;
  }
  return start;
}
void display()
{
    struct node *ptr;
    ptr=start;
    while(ptr->next!=NULL)
    {

        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node* deleteFirst(int data)
{
  struct node *ptr,*prev;

  ptr=start;

  while(ptr->data!=data)
  {
      prev=ptr;
      ptr=ptr->next;
  }
  if(ptr->data==data)
  {
      prev->next=ptr->next->next;
      free(ptr);
      printf("Debug-1");
  }
 return start;
}
struct node *deleteLast(int data)
{
 struct node *ptr,*prev,*preprev,*post;
 ptr=start;
 while(ptr->next!=NULL)
 {
     if(ptr->next->data==data)
     {
         printf("Debug-2");
         preprev=ptr;
         prev=ptr->next;
         post=ptr->next->next;
     }
     ptr=ptr->next;
 }
 if(prev->data==data)
 {
     preprev->next=post;
     free(prev);
 }
  return start;
}

struct node *deleteAll(int data)
{
 struct node *ptr,*prev;
 ptr=start;
 while(ptr->next!=NULL)
 {
     if(ptr->next->data==data)
     {
       prev=ptr;
       prev->next=ptr->next->next;
       ptr=prev;
     }
     else
     {
       ptr=ptr->next;
     }

 }
 return start;
}

int main()
{
   int data,op;
   printf("**Inserting the data**\n");
    do
    {

        printf("Enter the data: ");
        scanf("%d",&data);
        printf("\n");
        start=iNsert(data);
    }while(data!=-1);

    printf("\n***Printing the data***\n");
        display();
    printf("\n");

    printf("Entter the operation:\n");
    printf("\n1.Delete the first occurrence \n");
    printf("\n2.Delete the last occurrence\n");
    printf("\n3.Delete all occurrence \n");
    scanf("%d",&op);
    switch(op)
    {

    case 1:
        printf("Enter the number: ");
        scanf("%d",&data);
        start=deleteFirst(data);

        printf("\n***Printing the data***\n");
        display();
        printf("\n");

        break;
    case 2:
        printf("Enter the number: ");
        scanf("%d",&data);
        start=deleteLast(data);

        printf("\n***Printing the data***\n");
        display();
        printf("\n");
    case 3:
        printf("Enter the number: ");
        scanf("%d",&data);
        start=deleteAll(data);

        printf("\n***Printing the data***\n");
        display();
        printf("\n");
    }
    return;
}
