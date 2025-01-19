#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    /* data */
    char data;
    struct node * next;
};


void pop();
void reverse();

struct node * top=NULL,*temp,*newnode;
char newstr[15];

int main()
{
    printf("Enter the string ");
    char string[15];
    scanf("%s",string);
    reverse(string);
    printf("%s",newstr);
}

void push(char x)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;

}

void pop()
{
    temp=top;
    top=top->next;
    free(temp);
}

void reverse(char string[])
{    
  
    for (int i=0;i<strlen(string);i++)
    {
        push(string[i]);
    }

    for(int i=0;i<strlen(string);i++)
    {
         newstr[i]=top->data;
         pop();
    }

}