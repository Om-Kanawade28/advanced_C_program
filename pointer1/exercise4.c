//exercise4
/*4. Write a program in C to add two numbers using pointers.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

The sum of the entered numbers is : 11 
*/
#include <stdio.h>
int main()
{
    int a, b, *ptr1, *ptr2, sum;
    printf("Input the first number : ");
    scanf("%d", &a);
    printf("Input the second number : ");
    scanf("%d", &b);
    ptr1 = &a;
    ptr2 = &b;
    sum = *ptr1 + *ptr2;
    printf("The sum of the entered numbers is : %d ", sum);
    return 0;
}