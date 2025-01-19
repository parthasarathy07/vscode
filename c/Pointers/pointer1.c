
#include <stdio.h>
#include<string.h>
void fun(char* str){
    printf("%p",str);
}
int main() {
    char arr[]="king";
    printf("%p\n",&arr);
    fun(arr);
    return 0;
}