#include <stdio.h>

void push();
void pop();
void Top();
void print();

int array[50];
int top=-1;
int size=sizeof(array)/sizeof(array[0]);

int main()
{

   push(1);
   push(2);
   push(4);
   print();
   pop();
   push(3);
   push(4);
   print();
   Top();

}

void push(int x)
{
    if(top==size-1)
    {
        printf("stack overflow\n");
        return;
    }
    else
    {
        array[++top]=x;

    }

}

void pop()
{
    if (top==-1)
    {
        printf("stack is empty\n");
        return;
    }
    top--;
}
void print()
{
     printf("Elements in array :");
    for (int i=0;i<=top;i++)
    {
        printf("%d",array[i]);
    }
    printf("\n");
}

void Top()
{
    printf("top is %d\n",top);

}