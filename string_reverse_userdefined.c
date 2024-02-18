#include <stdio.h>
#include <string.h>

void reverse(char str[20]);

int main() {
    char str[20];
    printf("Enter the string: ");
    gets(str);
    printf("Your string: %s\n", str);
    reverse(str);
    return 0;
}

void reverse(char str[20]) {
    int i;
    printf("Reverse string: ");
    for(i = strlen(str) - 1; i >= 0; i--)
        printf("%c", str[i]);
}
