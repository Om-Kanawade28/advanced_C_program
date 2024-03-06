#include<stdio.h>
int main()
{ 
    int a=20;
    int *ptr = &a;
    printf("the adress of a store in ptr:-%d\n",ptr);
    ptr++;
    printf("when increment in ptr++:-%d\n",ptr);
    ptr--;
     printf("when decrement in ptr--:-%d\n",ptr);


    return 0;
}
/*
the adress of a store in ptr:-6422296
when increment in ptr++:-6422300
when decrement in ptr--:-6422296    
*/
