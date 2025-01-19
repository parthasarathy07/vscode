#include<stdio.h> 
#include<stdlib.h>

void linkedlist();
void travis();
void insert_at_begin();

struct node 
{
  int data;
  struct node * next;
};

struct node *head = NULL, *temp=NULL,*newnode=NULL;
int choise =1;

int main()
 {
   linkedlist();
   travis();
   insert_at_begin();
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

void insert_at_begin()
{
  newnode =(struct node *)malloc(sizeof(struct node));
  if(newnode==NULL)
  {
    printf("memory allocation faild\n");
    return;
  }
  printf("\nenter the value to enter at **begin** ");
  scanf("%d",&newnode->data);
  newnode->next=head;
  head=newnode;
}
