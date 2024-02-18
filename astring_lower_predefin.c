#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char str[10];
    printf("enter string:-");
    gets(str);
    printf("your string:-%s\n",str);
    printf("lower stinf=");
    for(int i=0;str[i]!='\0';i++)
    printf("%c",tolower(str[i]));
    return 0;
}