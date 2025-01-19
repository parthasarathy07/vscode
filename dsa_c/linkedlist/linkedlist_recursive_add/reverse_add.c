#include<stdio.h>
#include<stdlib.h>

void insert(int arg);
int sums(struct node* l1);

struct node 
{
    int data;
    struct node * next;
};


struct node * newnode,*head=NULL,*temp=NULL;
int value=0;
int main()
{
    insert(1);
    insert(2);
    insert(3);
    printf("%d",sums(head));
  
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

int sums(struct node* l1){
    if(l1->next==NULL){
        return l1->data;
    }
    value=sum(l1->next)*10+value;
    return value;
}