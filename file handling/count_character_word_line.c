#include<stdio.h>
int main()
{ 
    FILE *fp;
    char ch;
    int word = 0,line = 0,chr = 0;
    fp = fopen("text.txt","r");
    for((ch = fgetc(fp));ch != EOF; ch = getc(fp))
    {
        chr++;
        if(ch=='\n');
        {
            line++;
        }  
          if(ch=='\n' || ch == '\t' || ch == ' ' )  
          {
            word++;
          }
    }
    printf("words:=%d\n",word);
    printf("character:=%d\n",chr);
    printf("Line:=%d\n",line);
    fclose(fp);
    return 0;
}