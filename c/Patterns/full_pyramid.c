#include<stdio.h>
int main(){
    int row;
    printf("enter the no of rows ");
    scanf("%d",&row);
    int space=row;
    for(int i=1;i<row*2;i+=2){
        for(int k=space-1;k>0;k--){
            printf(" ");
        }
        space--;
        for(int j=i;j>0;j--){
            printf("*");
        }
        printf("\n");       
    }
}
/*
    * 
   ***
  ******
 *********
*/