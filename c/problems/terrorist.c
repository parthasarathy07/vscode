#include<stdio.h>
const int m=8;

void display(int arr[m][m]){
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int arr[8][8];
    int count =0;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        for(int j=0;j<sizeof(arr[0])/sizeof(arr[0][0]);j++){
            arr[i][j]=1;
        }
    }
    display(arr);
    int no_chops;
    char coordinate[5];
    printf("Enter the no of chops ");
    scanf("%d",&no_chops);
    while (no_chops!=0)
    {
        no_chops--;
        printf("Enter the coordinates (x,y) ->");
        scanf("%s",coordinate);
        if(coordinate[1]>'8'||coordinate[3]>'8'){
            printf("Enter valid coordinates");
            return 0;
        }
        for(int i =0;i<m;i++){
            if(arr[i][(coordinate[3]-'0')]==0)
            continue;
            arr[i][coordinate[3]-'0']=0;
            count++;
        }
        for(int i=0;i<m;i++){
            if(arr[coordinate[1]-'0'][i]==0)
            continue;
            arr[coordinate[3]-'0'][i]=0;
            count++;
        }
        display(arr);
        printf("The no of terroriest caught was %d\n",count);
        
    }
    

}