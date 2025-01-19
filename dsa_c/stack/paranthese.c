#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void push(char x);
void pop();


struct node
{
    char data;
    struct node * link;
};


struct node * top = NULL,*temp=NULL,*newnode;
char value;

int main()
{
    char str[10];
    printf("Enter the elements");
    scanf("%s",str);
    
    for (int i=0;i<strlen(str);i++)
    {
        if(str[i]=='{'||'('||'[')
        {
            push(str[i]);
            value=top->data;
            
        }
        else if (( value == NULL)||(checkpair(str[i])))
        {
            printf("paranthesis are not balanced");
            return 0;
           
        }
        else
        {
            pop();
            value=top->data;
            
        }

    }

    if(value==NULL)
    {
        printf("paranthesis are balanced");
    }

    

}


void push(char x)
{
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=top;
    top=newnode;
}

void pop()
{
    temp=top;
    top=top->link;
    free(temp);
}

int checkpair(char y)
{
    int val;
    if(y=='{')
    {
        if(top->data=='}')
        {
            val=0;
        }
        else
        {
            val=1;
        }

    }
    else if(y=='(')
    {
        if(top->data==')')
        {
            val=0;
        }
        else
        {
            val=1;
        }
    }
    else
    {
        if(y=='[')
        {
            val=0;
        }
        else
        {
            val=1;
        }
    }

    return val;
}