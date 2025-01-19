#include<stdio.h>
#include<stdlib.h>

void insert(int arg);
void travis();
void reverse();

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
    insert(6);
    travis();
    reverse();
    travis();
  
}

void insert(int val)
{
    newnode=(struct node *)malloc(sizeof(struct node));
    (*newnode).data=val;
    newnode->next=NULL;

    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }

}

void travis()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}

void reverse()
{
    struct  node * previous,*next,*current;
    current=head;
    previous=NULL;
    while (current!=NULL)
    {
        next=current->next;
        current->next = previous;
        previous=current;
        current=next;
    }
    head=previous;
}