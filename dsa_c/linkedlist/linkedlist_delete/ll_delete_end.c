#include<stdio.h>
#include<stdlib.h>

void insert();
void travis();
void delete();

struct node
{
    /* data */
    int data;
    struct node * next;
};

struct node *newnode,*head =NULL,*temp = NULL;
int range ;
int main()
{
    printf("enter the range ");
    scanf("%d",&range);
    printf("enter the datas \n");
    insert();
    travis();
    delete();
    printf("\n after delition");
    travis();
 
}

void insert()
{

    for (int i=1;i<=range;i++)
    
    {
      newnode=(struct node*)malloc(sizeof(struct node));
      scanf("%d",&newnode->data);
      newnode->next=NULL;
      if (head==NULL)
      {
          head=temp=newnode;
      }
      else
      {
          temp->next=newnode;
          temp = newnode;
      }

    }
}

void travis()
{
    temp = head;
    printf("\n the values are ");
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void delete()
{
    struct node * previous;
    temp=head;
    while(temp->next != NULL)
    {
        previous=temp;
        temp=temp->next; 
    }

    if (head==temp)
    {
        head=0;
    }
   else
   {
         previous->next=NULL;
   }

    free(temp);
}