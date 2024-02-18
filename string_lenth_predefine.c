#include<stdio.h>
#include<string.h>
void main()
{
    char str[10];
    printf("Enter the string:-");
    gets(str);
    printf("your string=%s\n",str);
    printf("lenth of string=%d\n",strlen(str));
}