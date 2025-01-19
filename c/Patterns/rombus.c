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
    space=0;
  int lines=row*2 -1;
  for(int i=0;i<row;i++){
    for(int i=0;i<space;i++){
      printf(" ");
    }
    space++;
    for(int j=0;j<lines;j++){
      printf("*");
    }
    printf("\n");
    lines-=2;
  }
}