#include<stdio.h>
void fun(int *a,int *b){
    printf("%d,%d\n",*a,*b);
}
int main(){
    int arr[]={1,2,3,4,5};
    int num=0;
    printf("%d,%d\n",*arr,num);
    fun(arr,&num);
    printf("%d,%d\n",*arr,num);
}