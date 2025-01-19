#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;

};

void insert();
void reverse();
void travis();

struct node *head=NULL,*temp=NULL,*newnode,*q;

int main()
{
   insert();
   travis();
   temp=head;
   reverse(temp);
   travis();
  
}

void insert()
{
  
   int choise =1;

    while(choise)
    {
  
      newnode=(struct node*)malloc(sizeof(struct node));
      
      if(newnode==NULL)
      {
        printf("memory allocation failed\n");
        return;
      }
       
      printf("\nenter the data ");
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

      printf("\n");
      printf("enter \"1\"to continue ");
      scanf("%d",&choise);
    }
    
  


}

void travis()
{
    temp=head;
    while(temp!=NULL)
    {
       printf("%d ",temp->data);
       temp=temp->next;
    }
    printf("\n");
}

void reverse(struct node * p)
{
  if(p->next == NULL)
  { 
    head = p;
    return;
  }
  reverse(p->next);
  q=p->next;
  q->next=p;
  p->next= NULL;

  

}