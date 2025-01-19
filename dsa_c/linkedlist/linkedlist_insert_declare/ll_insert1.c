#include<stdio.h>
#include<stdlib.h>
void insert();
void travis();
struct node
{
  int data;
  struct node * next;
};

 struct node * newnode,*head=NULL,*temp=NULL;

int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    travis();
}

void insert(int value)
{
   
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    
    if (head==NULL)
    {
       head =temp= newnode;
    }
    else
    {
      temp->next=newnode;
      temp=newnode;
    }
    
}

void travis()
{
  temp =head;
  while(temp != NULL)
  {
     printf("%d\n",temp->data);
     temp=temp->next;
  }
}