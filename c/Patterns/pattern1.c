/*
    1
   232
  34543
 4567654
567898765
*/
#include<stdio.h>
int main(){
    int rows;
    int val=1;
    printf("Enter the no of rows ");
    scanf("%d",&rows);
    int space=rows-1;
    for(int i=0;i<rows;i++){
        for(int j=0;j<space;j++){
            printf(" ");
        }
        space--;
        for(int j=i;j>0;j--){
            printf("%d",val-j);
        }
        printf("%d",val);
        for(int j=1;j<=i;j++){
            printf("%d",val-j);
        }
        printf("\n");
        val+=2;
    }
}