#include<stdio.h>
int main(){
    char s1[]="king";
    char s2[6]="queen";//[size]is always greater than inserting size("queen")--it automatically allocate \0
    char s3[5]={'j','a','c','k'};
    char s4[]={'a','c','e'};
    printf("s1->%ld-->%s\ns2->%ld-->%s\ns3->%ld-->%s\ns4->%ld-->%s\n",&s1,s1,&s2,s2,&s3,s3,&s4,s4);
    char* ptr=s4;
    for(int i=0;i<25;i++){
        printf("%c\n",*ptr);
        ptr++;
    }
}