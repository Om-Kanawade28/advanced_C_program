/*
5. Create a structure named "Employee" to store employee details
 such as employee ID, name, and salary. Write a program to input 
 data for three employees, find the highest salary employee, and
  display their information.
*/
#include<stdio.h>

struct Employee {
    int Id;
    char name[20];
    float salary;
} e[10];

int main() {
    int i;
    int high_sal = 0;
    int low_sal = 0;
    for(i = 0; i < 3; i++) {
        printf("Enter the information of employee no:%d\n", i+1);
        printf(" Id: ");
        scanf("%d", &e[i].Id);
        printf("name: ");
        scanf("%s", e[i].name);
        printf("salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("Id \t: name \t: salary\n");
    for(i = 0; i < 3; i++) {
        printf("%d \t: %s \t: %.2f\n", e[i].Id, e[i].name, e[i].salary);
        if(e[i].salary > e[high_sal].salary) {
            high_sal = i;
        }
        if(e[i].salary < e[low_sal].salary) {
            low_sal = i;
        }
    }

    printf("lowest salary employee:\n");
    printf("Id: %d\n", e[low_sal].Id);
    printf("name: %s\n", e[low_sal].name);
    printf("salary: %.2f\n", e[low_sal].salary);
    
    printf("highest salary employee:\n");
    printf("Id: %d\n", e[high_sal].Id);
    printf("name: %s\n", e[high_sal].name);
    printf("salary: %.2f\n", e[high_sal].salary);

    return 0;
}
