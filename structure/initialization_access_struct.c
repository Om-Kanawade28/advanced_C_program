#include<stdio.h>
int main()
{ 
    struct student{
    int sno;
    char sname[20];
    float per;
}s={1,"om",90.28};
printf("sno=%d\n",s.sno);
printf("sno=%s\n",s.sname);
printf("sno=%.2f\n",s.per);
    return 0;
}
