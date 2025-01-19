#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;

};

void insert();
void print();

struct node *head=NULL,*temp=NULL,*newnode;

int main()
{
   insert();
   temp=head;
   print(temp);
  
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
      printf("enter \"1\" to continue ");
      scanf("%d",&choise);
    }
    
  


}

void print(struct node * temp)
{
    if(temp == NULL)
    {
        return;
    }
    print(temp->next);
    printf("%d",temp->data);


}