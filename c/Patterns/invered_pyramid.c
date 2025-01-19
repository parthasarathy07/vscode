#include<stdio.h>
int main(){
  printf("enter the no of rows ");
  int rows;
  scanf("%d",&rows);
  int space=0;
  int lines=rows*2 -1;
  for(int i=0;i<rows;i++){
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
/*
*******
 *****
  *** 
   *




*/