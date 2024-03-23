#include<stdio.h>
int main(){
FILE *fp;
fp = fopen("text.txt","w");
fclose(fp);
return 0;
}

