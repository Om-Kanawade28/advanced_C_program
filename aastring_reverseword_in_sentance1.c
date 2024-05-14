#include<stdio.h>
#include<string.h>
void  reversesentence( char str[],int start,int end)
{
    char temp;
    while(start<end)
    {
        temp=str[start];
       str[start]=str[end];
       str[end]=temp;
       end--;
       start++;
    }
}
void reverseword(char str[]) {
    int start = 0;
    int end;
    int length = strlen(str);
    reversesentence(str, 0, length - 1);
    for (end = 0; end < length; end++) {
        if (str[end] == '.') {
            reversesentence(str, start, end - 1);
            start = end + 1;
        }
    }
    reversesentence(str, start, length - 1);
}
int main()
{ 
    char str[20];
//enter string 
    printf("Enter the string:-");
    scanf("%s",&str);
   reverseword(str);
    printf("reverse the world:-%s",str);
    return 0;
}