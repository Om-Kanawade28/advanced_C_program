#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int i,j;
void compare(char str[20],char str1[20]);
void conacate(char str[],char str1[]);
void conacate(char str[],char str1[]){
   i = strlen(str);
   for(j=0;str1[j]!='\0';i++,j++)
     {
      str[i]=str1[j];
     }
     str[i] ='\0';
 }  
void compare(char str[20], char str1[20]) {
    int i = 0; // Make sure to declare the variable i
    while (str[i] == str1[i]) {
        if (str[i] == '\0' || str1[i] == '\0') // Check for end of strings
            break;
        i++;
    }

    if (str[i] == '\0' && str1[i] == '\0') {
        printf("Strings are same\n");
    } else {
        printf("Strings are not same\n");
    }
}

//void conacate(char str[],char str1[]);
//void compare(char str[],char str1[]);
void main()
{
char str[20];
char str1[20];
int ch,n,count=0,i,j;
while(n)
{
printf("\n***********MENU***********\n");
printf("1.copy\n");
printf("2.length\n");
printf("3.reverse\n");
printf("4.concatination\n");
printf("5.toupper\n");
printf("6.tolower\n");
printf("7.compare\n");
printf("your choose=");
scanf("%d",&ch);
printf("\nmenu[1=yes,0=no]=");
scanf("%d",&n);
switch(ch)
{
case 1:
printf("enter the string:-");
scanf("%s",&str);
for(int i=0;str[i]!='\0';i++)
  str1[i]=str[i];
printf("copy string:-%s",str1);
break;
case 2:
printf("enter the string:-");
scanf("%s",&str);
  for(int i=0;str[i]!='\0';i++)
    count+=1;//count=count+1
printf("lenth of string:-%d",count);
break;
case 3:
printf("enter the string:-");
scanf("%s",&str);
for(int i=0;str[i]!='\0';i++)
    count+=1;
printf("reverse  string:-");
for(int i=count;i>=0;i--)
   printf("%c",str[i]);
break;
case 4:
printf("enter first string:-");
scanf("%s",&str);
printf("enter second string:-");
scanf("%s",&str1);
conacate(str,str1);
printf("conacte string=%s\n",str);

//conacate(str,str1);
/*i = strlen(str);
   for(j=0;str1[j]!='\0';i++,j++)
     {
      str[i]=str1[j];
     }
     str[i] ='\0';
printf("conacte string=%s\n",str);*/
break;
case 5:
printf("enter the string:-");

scanf("%s",&str);
printf("toupper  string:-");
for(int i=0;str[i]!='\0';i++)
  if(str[i]>='a' && str[i]<='z')
  printf("%c",str[i]-('a'-'A'));
break;
case 6:
printf("enter the string:-");
scanf("%s",&str);
printf("tolower  string:-");
for(int i=0;str[i]!='\0';i++)
  if(str[i]>='A' && str[i]<='Z')
printf("%c",str[i]+('a'-'A'));
break;
case 7:
printf("enter first string:-");
scanf("%s",&str);
printf("enter second string:-");
scanf("%s",&str1);
compare(str,str1);


break;
default :
printf("enter value between 1-7");
}
}

/*void compare(char str[20],char str1[20])  {
    i=0;
   while(str[i]==str1[i])
     {
      if (str[i]=='\0' || str1[i]=='\0')
      break;
      i++;
     
     if(str[i]=='\0' &&  str1[i]=='\0')
        {
         printf("string is same");
         }
      else
         {
          printf("string is not same");
          }
          }
}*/
/*void conacate(char str[],char str1[]){
   i = strlen(str);
   for(j=0;str1[j]!='\0';i++,j++)
     {
      str[i]=str1[j];
     }
     str[i] ='\0';
     }*/
}
