#include<stdio.h>
#include<stdlib.h>
void insert();
void travis();

struct node
{
    /* data */
    int data;
    struct node * next;
    struct node * previous;
};

struct node * head=NULL,*temp=NULL,*newnode,*tail=NULL

;

int main()
{
    insert();
    travis();
}

void insert()
{
    int choise = 1;
    while(choise)
    {

    
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->previous=NULL;

    if (head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        newnode->previous=temp;
        temp=newnode;
        tail=newnode;
        
    }

    printf("enter '1' to continue");
    scanf("%d",&choise);

    }


}

void travis()
{
    temp=tail;
    while (temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->previous;
    }
}

