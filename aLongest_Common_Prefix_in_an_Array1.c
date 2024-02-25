#include<stdio.h>
#include<string.h>

char* longprefix(char arr[][100],int N){
    if(N <= 0){
        return NULL;// No strings, so no common prefix
    }

    char *prefix = arr[0];
    for(int i = 0;i < N; i++){
       int j = 0;
       while(prefix[j] && arr[i][j] && prefix[j]==arr[i][j]){
           j++;
       }
       prefix[j] = '\0';
       if(prefix[0] == '\0'){
          return NULL;
       }
    }
  return prefix;  
}

int main(){
 int N,i;
    printf("Enter the number of string:-");
    scanf("%d",&N);

    char arr[N][100];
    for(i=0;i<N;i++){
        printf("Enter the string %d:-",i+1);
        scanf("%s",arr[i]);
    }
    char *prefix = longprefix(arr,N);
    if(prefix==NULL)
    {
        printf("no cooman prefix");
    }
    else{
    printf("prefix=%s",prefix);
    }
    return 0;
}