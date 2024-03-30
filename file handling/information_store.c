#include<stdio.h>
int main()
{  
    int n,i;
     char name[20];
    int age;
    float salary;
    FILE *fp;
    while(1){
    fp = fopen("text.txt","a");
        printf("Enter the employee name,age,salary:-");
        scanf("%s%d%f",&name,&age,&salary);

    fprintf(fp,"\n%s\t\t\t\t\t\t%d\t\t\t\t\t%.2f",name,age,salary);
    fclose(fp); }
    return 0;
}