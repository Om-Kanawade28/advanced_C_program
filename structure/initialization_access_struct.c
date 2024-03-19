#include<stdio.h>
int main()
{ 
    struct student{
    int sno;
    char sname[20];
    float per;
}s={1,"om",90.28};
printf("sno=%d",s.sno);
printf("sno=%s",s.sname);
printf("sno=%.2f",s.per);
    return 0;
}