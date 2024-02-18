#include<stdio.h>
void main()
{
    int a=30,b=90,c=98;
    int *p[3];
    p[0]=&a;
    p[1]=&b;
    p[2]=&c;
    for(int i=0;i<=3;i++)
    {
        printf("the value of p[i]=%d and its address=%d\n",*p[i],p[i]);
    }
<<<<<<< HEAD
}
=======
}
>>>>>>> f5b5bb4b41ccfb20b151fa5bc39aa56860929fbe
