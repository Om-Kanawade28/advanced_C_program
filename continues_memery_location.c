#include<stdio.h>
void main()
{
    int a[5]={1,2,3,4,5};
    int i;
    for(i=0;i<=5;i++)
    {
        printf("the adress of a[%d] is %u",i,&a[i]);
        printf("the adress of a[%d] is %u",i,a+1);
        printf("the  a[%d] is %d\n",i,*(a+i));
        printf("the  a[%d] is %d\n",i,a[i]);
      
}