#include<stdio.h>
void main()
{
    int a[5]={1,2,3,4,5};
    int *p=a;
    printf("adress of array %u\n",p);//pointer only points only the zero the position element address only not array
    printf("adress a[0]=%d\n",&a[0]);
}