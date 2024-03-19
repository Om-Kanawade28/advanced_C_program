#include <stdio.h>

struct student{
int srno;
char name[20];
float per;
};
struct student s[50];
int main() {
int n;
printf("enter the how many students:-");
scanf("%d",&n);
for(int i=1;i<=n;i++){
 printf("enter student srno , name, per:-");
 scanf("%d %s %f",&s[i].srno,&s[i].name,&s[i].per);
  }
  printf("--------------------------------------\n");
  printf("rollno ||\tname ||\t\tpercentage\n");  
    printf("--------------------------------------\n");
    for(int i=1;i<=n;i++){
   printf(" %d |",s[i].srno);
   printf("\t\t%s|",s[i].name);
   printf("\t \t%.2f|",s[i].per);
   printf("\n");   }
    return 0;
}
