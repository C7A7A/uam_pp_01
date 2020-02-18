#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int euklides(int a, int b){
    while(a != b){
        if(a > b){
            a -= b;
        }
        else{
            b -= a;
        }
    }
    return a;
}

int main()
{
    int i, a, b;
    int sum = 0;
    bool flagA;
    scanf("%d %d %d", &a, &b, &i);
    while(i != 0){
        if(i == 1){
            sum += euklides(a, b);
            flagA = false;
        }else{
            flagA = true;
        }
        if(flagA){
            b = a;
            a = i;
        }
        scanf("%d", &i);
    }
    printf("%d", sum);
    return 0;
}
