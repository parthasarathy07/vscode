#include<stdio.h>
#include<string.h>
int main(){
    char arr[]="king";
    char *s=arr;
    printf("%ld\n%ld\n%ld",s,&s,*s,arr);

    int arr1[]={1,2,3,4,5};
    int *i=arr1;
    printf("\n\n%ld\n%ld\n%ld\n",&arr1,*(i+1),i);

    int integer=10;
    int *i1=&integer;
     printf("\n\n%ld\n%ld\n%ld\n",&integer,i1,*i1);
}