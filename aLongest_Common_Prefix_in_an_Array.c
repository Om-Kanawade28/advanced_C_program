#include<stdio.h>
#include<string.h>

char *longestCommonPrefix(char arr[][100], int N) {
    static char result[100];
    if(N <= 0) {
        strcpy(result, "-1");// No strings, so no common prefix
        return result;
    }
    //
    int minLen = strlen(arr[0]);
    for(int i = 1; i < N; i++) {
        int len = strlen(arr[i]);
        if(len < minLen)
            minLen = len;
    }

    int index;
    for(index = 0; index < minLen; index++) {
        char currentChar = arr[0][index];
        for(int i = 1; i < N; i++) {
            if(arr[i][index] != currentChar) {
                result[index] = '\0';
                return result;
            }
        }
        result[index] = currentChar;
    }
    result[index] = '\0';
    return result;
}

int main() {
    int N;
    printf("Enter the number of strings: ");
    scanf("%d", &N);
    char arr[N][100];
    printf("Enter the strings: \n");
    for(int i = 0; i < N; i++) {
        scanf("%s", arr[i]);
    }
    char *prefix = longestCommonPrefix(arr, N);
    printf("Longest common prefix: %s\n", prefix);
    return 0;
}
//