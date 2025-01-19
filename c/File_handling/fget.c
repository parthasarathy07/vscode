#include<stdio.h>
int main(){
    FILE* fp=fopen("gets_puts.c","r");
    char c;
    while(1){
        c=fgetc(fp);
        if(c!=EOF)
        printf("%c",c);
        else
        break;
        
    }
}