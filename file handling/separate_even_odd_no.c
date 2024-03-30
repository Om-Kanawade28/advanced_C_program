//read no of combine_even_odd.txt and separate the the number writen in the that file into other two file even.txt and odd.txt
#include<stdio.h>
int main()
{
    FILE *fp , *fe , *fo;
    int n;
    fp = fopen("combine_even_odd.txt","r");
    fe = fopen("even.txt","w");
    fo = fopen("odd.txt","w");
    while((fscanf(fp,"%d",&n))!=EOF)
    {
        if(n%2==0)
        {
            fprintf(fe,"%d ",n);
        }
        else
        {
            fprintf(fo,"%d ",n);
        }
    }
    fclose(fp);
    fclose(fe);
    fclose(fo);
    return 0;
}
