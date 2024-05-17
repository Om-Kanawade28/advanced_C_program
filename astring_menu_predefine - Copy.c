#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{ 
    char str[10];
    char str1[10];
    int ch;
    while(1)
    {
        printf("\n************MENU****************\n");
       
        printf("1.lenth\n");
        printf("2.copy\n");
        printf("3.lowercase\n");
        printf("4.uppercase\n");
        printf("5.compare\n");
        printf("6.reverse\n");
        printf("7.conactation\n");
        printf("enter the choise:-");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
              printf("Enter the string:-");
             
              gets(str);
              printf("lenth of string:-%d",strlen(str));

            break;
        case 3:
            printf("Enter the string:-");
            getchar();
            gets(str);
            printf("\nyour lowercase string:-");
            for(int i=0;str[i]!='\0';i++)
              printf("%c",tolower(str[i]));
             break;
        case 2:
              printf("Enter the string:-");
              getchar();
              gets(str);
              strcpy(str1,str);
              printf("string copy in 2nd string:-%s",str1);
             break;
        case 4:
              printf("Enter the string:-");
              getchar();
              gets(str);
              printf("uppercase string:-");
             for(int i=0;str[i]!='\0';i++)
              printf("%c",toupper(str[i]));
            break;
        case 5:
              printf("\nEnter first string:-");
              getchar();
              gets(str);
              printf("\nEnter second string:-");
              gets(str1);
              if((strcmp(str,str1))==0)
              {
                printf("strings are same");
              }
              else
              {
                printf("strings not same");
              }
        case 6:
        printf("Enter the string:-");
        getchar();
        gets(str);
        printf("reverse string:-%s",strrev(str));
        break;
        case 7:
        printf("\nEnter first string:-");
        getchar();
        gets(str);
        printf("\nenter second string:-");
        gets(str1);
        printf("\nconacting the strings:-%s",strcat(str1,str));

        default:
            break;
        }

    }
    return 0;
}