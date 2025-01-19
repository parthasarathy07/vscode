#include<stdio.h>
#include<stdlib.h>
int main(){
    int* p=(int*)malloc(sizeof(int)*3);
    *p=1;
    *(p+1)=2;
     p[2]=3;
     p[3]=4;
    printf("%d\n%d\n%d\n%d\n",*p,p[3],*(p+1),p[2]);
    printf("%ld\n%lu\n",p,sizeof(*p));
}