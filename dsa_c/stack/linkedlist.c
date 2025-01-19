#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void print();

struct node
{
    int data;
    struct node * link;
};

struct node * newnode,*temp,*top=NULL;

int main()
{
    push(1);
    push(2);
    push(3);
    print();
    pop();
    print();
}

void push(int x)
{
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=top;
    top=newnode;
}

void pop()
{
    temp=top;
    top=top->link;
    free(temp);
}
void print()
{
    temp=top;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->link;
    }
    printf("\n");
}