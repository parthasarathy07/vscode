#include<stdio.h>
int main(){
    int arr [8][10];
    long unsigned int totalsize = sizeof(arr);
    long unsigned int second_size = sizeof(arr[0]);
    long unsigned int single_element_size = sizeof(arr[0][0]);
    printf("%lu\n",(sizeof(arr)));
    printf("%lu\n",(sizeof(arr[0])));
    printf("%lu\n\n",(sizeof(arr[0][0])));
    printf("%lu\n",totalsize/second_size);
    printf("%lu\n",second_size/single_element_size);
}