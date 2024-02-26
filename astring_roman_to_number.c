#include<stdio.h>
static int roman_number( char c){
 switch(c){
    /*The symbols are I, V, X, L, C, D, and M, standing respectively for 1, 5, 10, 50, 100, 500, and 1,000.*/

    case 'I':return 1;
    case 'V':return 5;
    case 'X':return 10;
    case 'L':return 100;
    case 'D':return 500;
    case 'M':return 1000;
    case 'i':return 1;
    case 'v':return 5;
    case 'x':return 10;
    case 'l':return 100;
    case 'd':return 500;
    case 'm':return 1000;
    default:return 0;

 }
}
 int final_number( char str[]) {
    int i,init_no=roman_number(str[0]);
    for(i=1;str[i]!='\0';i++)
     {
      int prev_no=roman_number(str[i-1]);
      int curnt_no=roman_number(str[i]);
       if(prev_no<curnt_no)
       {
        init_no=init_no-prev_no+(curnt_no-prev_no);
       }
       else{
        init_no=init_no+curnt_no;
       }
     }     
       return init_no;
 }
int main()
{ 
    char str[20];
    printf("Enter the roman number:-");
    scanf("%s",&str);
    printf("the original roman:-%s",str);
    printf("\nthe roman to the number:-%d",final_number(str));


    return 0;
}