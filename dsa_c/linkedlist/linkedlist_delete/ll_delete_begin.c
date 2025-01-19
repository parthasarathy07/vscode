#include<stdio.h>
#include<stdlib.h>
void insert();
void travis();
void delete();
struct node
{
  int data;
  struct node * next;
};

struct node * newnode,*head=NULL,*temp=NULL;
int main()
{ 
    int range ;
    printf("enter the range ");
    scanf("%d",&range);
    insert(range);
    travis();
    delete();
    printf("elements after delition ");
    travis();
}

void insert(int range)
{
    for (int i=1;i<=range;i++)
    {
       newnode=(struct node *)malloc(sizeof(struct node));
       (*newnode).data=i;
       newnode->next=NULL;
        if (head==NULL)
        {
            head=temp=newnode;
        }
        else 
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    
}

void travis()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");

}

void delete()
{
    temp=head;
    head = head->next;
    free(temp);
}