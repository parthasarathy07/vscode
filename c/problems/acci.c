#include<stdio.h>
int main(){
    char a;
    printf("Enter the value ");
    scanf("%c",& a);
    for(char i='A';i<=a;i++){
        for(char j='A';j<=i;j++){
            printf("%c",i+32);
        }
        printf("\n");
    }
}/*
A
BB
CCC
DDDD
EEEEE
FFFFFF
GGGGGGG
HHHHHHHH
IIIIIIIII
*/