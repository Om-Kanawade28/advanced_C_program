#include<stdio.h>
void toupper1(char str[10]);
int main()
{
    char str[10];
    printf("Enter the string:-");
    gets(str);
    printf("your string:-%s\n",str);
    printf("your toupper string:-");
    toupper1(str);
    return 0;
//uu
}
void toupper1(char str[10]) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            printf("%c", str[i] - ('a'-'A'));
        } else {
            printf("%c", str[i]);
        }
    }
}
//
