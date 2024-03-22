#include<stdio.h>
#include<string.h>
struct employee{
int eno;
char name[10];
float salary;

}e[20];

void main()
{
    int n,i,c,y=1,s;
    float max;
    char str[10];

       while(y)
           {
               printf("\n**************MENU************\n");
               printf("1.disply data\n");
               printf("2.add data\n");
               printf("3.find data of employee by id\n");
              printf("4.find data by name\n");
              printf("5.max salary\n");
              printf("6.modifiy the data\n");
              printf("choise:-");
              scanf("%d",&n);
              switch(n)
                          {
                              case 1 :
                                           printf("how many data to show:-\n");
                                           scanf("%d",&s);
                                           printf("employee data:-\n");
                                           printf("\t eno \t\t\tname \t\tsalary");
                                           for(i=0;i<s;i++){
                                           printf("\n\t%d \t\t\t%s \t\t%.2f \n",e[i].eno,e[i].name,e[i].salary);
                                           }
                                           break;
                            case 2 :
                                         printf("how many data you want to add data of employee:-");
                                         scanf("%d",&c);
                                         for(i=0;i<c;i++){
                                         printf("enter %d data of employee eno,name,salary:-",i+1);
                                         scanf("%d%s%f",&e[i].eno,&e[i].name,&e[i].salary);
                                         }
                                         break;
                             case 3:
                                         printf("enter the id :-");
                                         scanf("%d",&c);
                                         for(i=0;i<3;i++){
                                                if(e[i].eno==c)
                                                     {
                                                           printf("found data:-\n");
                                                           printf("\t eno \t\t\tname \t\tsalary");
                                                           printf("\n\t%d \t\t\t%s \t\t%.2f \n",e[i].eno,e[i].name,e[i].salary);
               
                                                      }else{
                                                               printf("not found\n");
                                                      }
                                             }
                                        break;
                             case 4:
                                          printf("enter the name:-");
                                          scanf("%s",&str);
                                          for(i=0;i<3;i++){
                                                    if(strcmp(e[i].name,str)==0)
                                                          {
                                                              printf("found data:-\n");
                                                              printf("\t eno \t\t\tname \t\tsalary");
                                                              printf("\n\t%d \t\t\t%s \t\t%.2f \n",e[i].eno,e[i].name,e[i].salary);
               
                                                           }else{
                                                                printf("not found\n");
                                                                    }
                                                 }
                                           break;
                               case 5 :
                                           max = e[0].salary;
                                          for(i=1;i<=3;i++){
                                                    if(e[i].salary>max)
                                                          {
                                                             max = e[i].salary;
               
                                                           }
                                           }
                                           printf("max=%.2f",max);   
                                           break;
                              case 6:
                                         printf("enter the id you want to modifiy the data:-");
                                         scanf("%d",&c);
                                         for(i=0;i<3;i++){
                                                if(e[i].eno==c)
                                                     {
                                                           printf("modify the data:-\n");
                                                           printf("name,salary:-");
                                                           scanf("%s%f",&e[i].name,&e[i].salary);
                                                           printf("\t eno \t\t\tname \t\tsalary");
                                                           printf("\n\t%d \t\t\t%s \t\t%.2f \n",e[i].eno,e[i].name,e[i].salary);
                                            
               
                                                      }
                                             }
                                        break;
                  
                              }
                 }
}


