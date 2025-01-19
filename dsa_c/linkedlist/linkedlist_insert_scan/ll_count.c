#include <stdio.h> 
#include<stdlib.h>

void linkedlist();
void travis();
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
   count();
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


int count()
{
  temp=head;
  while(temp!=NULL)
  {
    temp=temp->next;
    val=val+1;
  }
  printf("count is %d",val);
}