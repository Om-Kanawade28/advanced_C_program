#include<stdio.h>
int main()
{ 
    int a=20;
    int *p;
    p = &a;
    printf("the value a=%d\n",a);
    printf("the value a=%d\n",*p);
    printf("the adress a=%d\n",&a);
    printf("the adress a=%d\n",p);
    return 0;
}