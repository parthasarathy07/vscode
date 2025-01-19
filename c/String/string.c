#include<stdio.h>
#include<string.h>
int main()
{
char string1[20];
printf("enter the string1 ");
scanf("%s",string1);

int len1=strlen(string1);

for (int i=0;i<len1;i++)
{
    printf("%c",string1[i]);
}


char string2[20];
int len2;
printf("\nenter the string2 size ");
scanf("%d",&len2);

printf("\n enter the string2 ");
for (int j=0;j<=len2;j++)
{
 scanf("%c",&string2[j]);
}


printf("%s\n",string2);



}
