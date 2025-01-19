#include<stdio.h>
#include<stdlib.h>

void insert();
void delete();
void travis();
void count();

struct node
{
    int data;
    struct node * next;
    
};
struct node * head=NULL,*temp=NULL,*newnode;
int val=0, choise = 1;
int main()
{
   insert();
   travis();
   delete();
   travis();
}

void insert()
{
    while(choise)
    {
       newnode = (struct node *)malloc(sizeof(struct node));
       printf("enter the data \n");
       scanf("%d",&newnode->data);
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

       printf("enter choise 1 or o ");
       scanf("%d",&choise);
    }
}

void travis()
{
    temp=head;
    printf("the values are \n");
    while(temp!=NULL)
    {
        printf("%d ",(*temp).data);
        temp=temp->next;

    }
    printf("\n");
}

void delete()
{
    struct node * previous;
    int pos;
    printf("enter the position ");
    scanf("%d",&pos);
    count();
    if(val<pos)
    {
        printf("position invalid\n");
        return;

    }
    temp=head;
    for(int i=1;i<pos;i++)
    {
        previous=temp;
        temp=temp->next;
    }
    previous->next=temp->next;
    free(temp);
}

void count()
{
    temp=head;
    while(temp !=NULL)
    {
        temp=temp->next;
        val +=1;
    }
}