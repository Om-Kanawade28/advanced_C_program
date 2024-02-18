#include<stdio.h>
void tolower1( char str[]);
int main()
{ 
    char str[10];
    printf("Enter the string:-\n");
    gets(str);
    printf("your string:= %s\n",str);
    printf("your lower string:-");
    tolower1(str);
    return 0;
}
void tolower1(char str[]) {
    for(int i=0;str[i]!='\0';i++)
     if(str[i]>='A' && str[i]<='Z')
      printf("%c",str[i] + ('a'-'A'));
     else
     printf("%c",str[i]);
    
}