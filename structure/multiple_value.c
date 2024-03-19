<<<<<<< HEAD
#include<stdio.h>
struct student{
    int sno;
    char sname[20];
    float per;
}s[100];
int main()
{ int n;
    printf("enter the number of srtudent you want to insert:-");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("\nEnter the sno ,sname ,per:- ");
        scanf("%d%s%f",&s[i].sno,&s[i].sname,&s[i].per);
    }
    for(int i=1;i<=n;i++){
        printf("\nEnter the sno ,sname ,per:-%d  ,%s ,%.2f ",s[i].sno,s[i].sname,s[i].per);
     
    }

    return 0;
}
=======
#include<stdio.h>
struct student{
    int sno;
    char sname[20];
    float per;
}s[100];
int main()
{ int n;
    printf("enter the number of srtudent you want to insert:-");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("\nEnter the sno ,sname ,per:- ");
        scanf("%d%s%f",&s[i].sno,&s[i].sname,&s[i].per);
    }
    for(int i=1;i<=n;i++){
        printf("\nEnter the sno ,sname ,per:-%d  ,%s ,%.2f ",s[i].sno,s[i].sname,s[i].per);
     
    }

    return 0;
}
>>>>>>> cd03cb0d27486c8d9337dae57e3e1ad862adfca3
