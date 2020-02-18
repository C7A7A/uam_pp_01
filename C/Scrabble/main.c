#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void revStr(char *str, int len);

int main()
{
    int i, n;
    scanf("%d", &n);
    char str[31];
    for(i = 0; i < n; i++){
        scanf("%s", str);
        revStr(str, strlen(str));
        printStr(str, strlen(str));
    }
    return 0;
}

void revStr(char *str, int len){
    int i, j;
    char tmp;
    for(i = 0; i < len; i++){
        for(j = 0; j < len-i; j++){
            if(str[j] < str[j+1]){
              tmp = str[j];
              str[j] = str[j+1];
              str[j+1] = tmp;
            }
        }
    }
}

void printStr(char *str, int len){
    int i;
    for(i = 0; i < len; i++){
        printf("%c", str[i]);
    }
    printf("\n");
}
