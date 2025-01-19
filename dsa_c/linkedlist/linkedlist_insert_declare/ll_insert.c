#include<stdio.h>
#include<stdlib.h>

struct node
{
    /* data */
    int data;
    struct node* next;
};

int main()
{
  
  //initialize node
  struct node *one ,*two,*three,*head,*temp;

  //alocate memory
  one=(struct node*)malloc(sizeof(struct node));
  two=(struct node*)malloc(sizeof(struct node));
  three=(struct node*)malloc(sizeof(struct node));

  //enter data
  (*one).data=1;
  two->data=2;
  three->data=3;

  //join node
  head=one;
  one->next=two;
  two->next=three;
  three->next=NULL;
 
  temp=head;

  while(temp !=   NULL)
  {
    printf("%d\n",temp->data);
    temp=temp->next;
  }

}
