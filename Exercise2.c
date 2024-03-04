/*2. Define a structure named Time with members hours, minutes, and seconds. 
Write a C program to input two times, add them, and
 display the result in proper time format.*/
 #include<stdio.h>
 struct Time{
    int hours;
    int minutes;
    int seconds;
 }t[2];
 int main()
 {
    int i;
    for(i=1;i<=2;i++)
    {
        printf("Enter the Time Hours,Minutes,Seconds:-");
        scanf("%d%d%d",&t[i].hours,&t[i].minutes,&t[i].seconds);
    }

    printf("Hours\t: Minutes\t: Seconds \n");
     for(i=1;i<=2;i++)
    {
      
        printf("%d\t:\t%d\t:\t%d",t[i].hours,t[i].minutes,t[i].seconds);
        printf("\n");
    }
    return 0;

 }
