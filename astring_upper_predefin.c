#include<stdio.h>
#include<string.h>
#include<ctype.h>
void touopper1(char str[]);

int main()
{
char str[10];
printf("enter the string:-");
gets(str);
printf("your string:-%s",str);
printf("toupper string:-");
touopper1(str);

    return 0;
}
void touopper1(char str[]) {
    for(int i=0;str[i]!='\0';i++)
      printf("%c",toupper(str[i]));
}