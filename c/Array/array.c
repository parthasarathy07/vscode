#include<stdio.h>
int main()
{
    int arr[50];

    for (int i=0;i<10;i++)
    {
        arr[i]=i;
    }

    int l = sizeof(arr)/sizeof(arr[0]);
    printf("%p\n",arr);
    printf("%d\n",*arr+1);
    printf("%d\n",l);
    
}