#include<stdio.h>
int main()
{ 
    int a = 90,b = 28,c = 76;
    int *ptr[3];
    ptr[1] = &a;
    ptr[2] = &b;
    ptr[3] = &c;
    printf("address of a:-%d\n",ptr[1]);
    printf("address of b:-%d\n",ptr[2]);
    printf("address of c:-%d\n",ptr[3]);
    return 0;
}
/*
address of a:-6422300
address of b:-6422296
address of c:-6422292
*/
