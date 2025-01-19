#include<stdio.h>
void bit();
int main()
 {
    int n=133;
    bit(n);
 } 

void bit(int n)
 {
    int j=0;
    int arr[50];
    while(n!=0)
     {
        arr[j]=n%2;
        j+=1;
        n/=2;
     }
     
     for(int i=j-1;i>=0;i--)
     {
        printf("%d",arr[i]);
     }
 }