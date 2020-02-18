#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checkLet(char *str, int len);
int checkNum(char *str, int len);

int main()
{
    int i, n, let = 0, num = 0, len;
    scanf("%d", &n);
    char str[31];
    for(i = 0; i < n; i++){
        scanf("%[^\n]s", str);
        printf("%s", str);
        let = checkLet(str, strlen(str));
        num = checkNum(str, strlen(str));
        len = strlen(str);
        printf("%d %d %d\n", len, let, num);
    }
    return 0;
}

int checkLet(char *str, int len){
    int i, res = 0;
    for(i = 0; i < len; i++){
        if( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') ){
            res++;
        }
    }
    return res;
}

int checkNum(char *str, int len){
    int i, res = 0;
    for(i = 0; i < len; i++){
        if( (str[i] >= '0' && str[i] <= '9')){
            res++;
        }
    }
    return res;
}






