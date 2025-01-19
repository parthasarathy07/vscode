#include<stdio.h>
int main(){
    char s[]="2 red and 3 blue balls";
    int n1,n2;
    char s1[10],s2[10];
    sscanf(s,"%d %*s %*s %d %s %s",&n1,&n2,s1,s2);
    printf("%d%d\t%s\t%s\n",n1,n2,s1,s2);
}