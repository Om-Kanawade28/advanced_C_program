#include<stdio.h>
int main()
{ 
    int a=20;
    int *ptr = &a;// pointer variable
    printf("the address of a store in ptr:-%d\n",ptr);
    ptr=ptr+3;
    printf("the increment by 3 in ptr+3:-%d\n",ptr);
    ptr=ptr-3;
    printf("the decrement by 3 in ptr-3:-%d\n",ptr);

    return 0;
}
/*
the address of a store in ptr:-6422296
the increment by 3 in ptr+3:-6422308
the decrement by 3 in ptr-3:-6422296
*/
