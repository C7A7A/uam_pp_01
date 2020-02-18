#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool checkDataType(char *);

int main()
{
    int n, i, res;
    char input1[11], input2[11];
    int num1, num2;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%s", &input1);
        scanf("%s", &input2);
        if(checkDataType(input1) && checkDataType(input2)){
            num1 = atoi(input1);
            num2 = atoi(input2);
            res = num1 + num2;
            printf("%d\n", res);
        }else if(checkDataType(input1) && !checkDataType(input2)){
            num1 = atoi(input1);
            printf("%c\n", input2[num1-1]);
        }else if(!checkDataType(input1) && checkDataType(input2)){
            num2 = atoi(input2);
            printf("%c\n", input1[num2-1]);
        }else{
            printf("%s%s\n", input1, input2);
        }
    }

    return 0;
}

bool checkDataType(char *input){
    if( (input[0] >= '0' && input[0] <= '9') ) {
        return true;
    }
    return false;
}
