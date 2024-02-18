#include<stdio.h>
#include<stdlib.h>
int len(char str[20]);
void main()
{
    char str[10];
    printf("Enter the String:-");
    gets(str);
    printf("lenth of your string=%d",len(str));
    
}
int len(char str[20])
{
    int i=0;
    for(i=0;str[i]!='\0';i++);
    return i;
}