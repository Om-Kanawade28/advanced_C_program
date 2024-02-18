#include<stdio.h>

void toupper1(char str[10]);
int main()
{
    char str[10];
    printf("Enter the string:-");
    gets(str);
    printf("your string:-%s",str);
    toupper1(str);
    return 0;
}
void toupper1(char str[10]) {
    for(int i=0;i<=10;i++)
     printf("%c",str[i]-32);
}
