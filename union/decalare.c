#include<stdio.h>

union {
    int eno;
    char name[20];
    float sal;
} emp;

int main() {

    printf("\nEnter the name: ");
    scanf("%s",&emp.name);
    printf("Enter the eno: ");
    scanf("%d", &emp.eno);


 

    printf("\nEnter the salary: ");
    scanf("%f", &emp.sal);

    printf("\nEno: %d\n", emp.eno);
    printf("Name: %s\n", emp.name);
    printf("Salary: %f\n", emp.sal);

    return 0;
}
