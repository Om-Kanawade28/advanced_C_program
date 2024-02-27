#include<stdio.h>
#include<stdlib.h>
 void divisible_by_number(char str[],int n){
   int num=atoi(str);
   if(num%n==0)
   {
    printf("%s divisibale by %d",str,n);
   }
   else
   {
    printf("%s not divisibale by %d",str,n);

   }

 }
int main()
{  char str[100];
int n;
    printf("Enter the string number:-");
    scanf("%s",&str);
    printf("\ngiven the nuber you want to divide the string:-");
    scanf("%d",&n);
    divisible_by_number(str,n);
    return 0;
}