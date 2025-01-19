#include<stdio.h>
int main(){
    // char str1[]="king";
    // char str2[5]="queen";
    // char str3[]={'j','a','c','k'};
    // char str4[3]={'a','c','e'};
    // printf("str1->%s::%lld\nstr2->%s::%lld\nstr3->%s::%lld\nstr4->%s::%lld\n",str1,&str1,str2,&str2,str3,&str3,str4,&str4);
    int k=2;
    char c=3;
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int j=0;
    char f=0;
    printf("address of k in %ld\n",&k);
    printf("address of j in %ld\n",&j);
    printf("address of f in %ld\n",&f);
    printf("address of c in %ld\n",&c);
    for(int i=0;i<10;i++){
        printf("arr[%d]->%ld\n",arr[i],&arr[i]);
    }
     
}