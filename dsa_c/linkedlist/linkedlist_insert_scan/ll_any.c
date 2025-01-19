#include <stdio.h> 
#include<stdlib.h>

void linkedlist();
void travis();
void insert_at_any();
int count();
struct node 
{
  int data;
  struct node * next;
};

struct node *head = NULL, *temp=NULL,*newnode=NULL;
int choise =1,val=0;

int main()
 {
   linkedlist();
   travis();
   insert_at_any();
   travis();
   return 0;
 }


void linkedlist()
{
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
      printf("enter \"0\" to stop else continue");
      scanf("%d",&choise);
    }
  
}

void travis()
{
  temp = head;
  while(temp != NULL)
  {
    printf("%d",temp->data);
    temp=temp->next;
    printf("\n"); 
  }
}


void insert_at_any()
{
  int pos,i=1;
  printf("enter the position");
  scanf("%d",&pos);
  count();
  if (pos>val||pos<2)
  {
    printf("\nposition invalid\n");
    return;
  }
  
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("\nenter the value to enter at **any** ");
  scanf("%d",&newnode->data);
  
  temp=head;
  
  while (i<pos-1)
  {  
    temp=temp->next;
    i++;
  }

  newnode->next=temp->next;
  temp->next=newnode;


}


int count()
{
  temp=head;
  while(temp!=NULL)
  {
    temp=temp->next;
    val=val+1;
  }
}