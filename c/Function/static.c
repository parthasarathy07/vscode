#include<stdio.h>

void func();

int main()
{
func();
func();
func();
}

void  func()
{
static int x=10;
x=x+1;
printf("%d\n",x);
}
