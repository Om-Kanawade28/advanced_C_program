/*4. Define a structure named Circle to represent a circle with a radius. 
Write a C program to calculate the area and
 perimeter of two circles and display the results.*/
 #include<stdio.h>
 const  int PI=3.14;
 struct circule{
    float radius;
 }c[100];
 int main(){
    int i;
    printf("Enter the information:_\n");
    for(i=1;i<=3;i++){
        printf("Enter the radius circule %d:-",i);
        scanf("%f",&c[i].radius);
    }
    printf("circule\t\t: radius\t: area\t:perimeter\t\n");
     for(i=1;i<=3;i++){
        printf(" circule %d:-",i);
        printf("\t%.2f",c[i].radius);
         printf("\t\t%.2f",PI*c[i].radius*c[i].radius);
         printf("\t%.2f",PI*c[i].radius*2);
        printf("\n");
    }


    
    return 0;

 }
