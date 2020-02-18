#include <stdio.h>
#include <stdlib.h>

int fib2(int x){
    int res = 0;
    if(x == 0 || x == 1 || x == 2){
        return 1;
    }else{
        res = fib2(x-1)+2*fib2(x-3);
    }
    return res;
}

int main()
{
    int i, t, x;
    scanf("%d", &t);
    int *A = (int*)calloc(t, sizeof(int));
    for(i = 0; i < t; i++){
        scanf("%d", &x);
        A[i] = fib2(x);
    }
    for(i = 0; i < t; i++){
        printf("%d\n", A[i]);
    }

    return 0;
}
