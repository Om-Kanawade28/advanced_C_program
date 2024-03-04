/*1. Create a structure called "Student" with members name, age, and total marks. 
Write a C program to input data for two students, display their information, and 
find the average of total marks.*/
#include<stdio.h>
struct student{
    char name[20];
    int age;
    float total_marks;
}s[3];
int main()
{
int i;
printf("Enter the student information");
for(i=1;i<=2;i++){
    printf("Enter the student ,name,age,total_marks:-");
    scanf("%s %d %f",&s[i].name,&s[i].age,&s[i].total_marks);
}
printf("name \t age \t total_marks \n");
for(i=1;i<=2;i++){
    
    printf("%s \t  %d \t  %.2f \t",s[i].name,s[i].age,s[i].total_marks);
    printf("\n");//om 21 89.7 om 22 99.1
}
printf("avarage total_marks:-=%f",(s[1].total_marks+s[2].total_marks)/2);
    return 0;

}