#include<stdio.h>
int main()
{ 
    FILE *fp;
    fp = fopen("text.txt","w");
    fprintf(fp,"this is file");
    fputs("hello",fp);
    fclose(fp);

    return 0;
}