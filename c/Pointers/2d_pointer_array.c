#include<stdio.h>
int main(){
    int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
    int a=arr;
    printf("%lu\n%lu\n",a,*(*(arr+1)+1));
}