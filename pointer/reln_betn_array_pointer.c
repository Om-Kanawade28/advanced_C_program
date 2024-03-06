#include<stdio.h>
int main()
{ 
    int a[5] = {1,2,3,4,5};
    for(int i= 0;i<=4;i++){
    printf("address of a[%d]:-%d\n",i,&a[i]);
    printf("address of a[%d]:-%d\n",i,a+i);
    printf("a[%d] is :-%d\n",i,a[i]);
    printf("a[%d] is :-%d\n",i,*(a+i));
    }
    return 0;
}
/*
address of a[0]:-6422280
address of a[0]:-6422280
a[0] is :-1
a[0] is :-1
address of a[1]:-6422284
address of a[1]:-6422284
a[1] is :-2
a[1] is :-2
address of a[2]:-6422288
address of a[2]:-6422288
a[2] is :-3
a[2] is :-3
address of a[3]:-6422292
address of a[3]:-6422292
a[3] is :-4
a[3] is :-4
address of a[4]:-6422296
address of a[4]:-6422296
a[4] is :-5
a[4] is :-5
*/
