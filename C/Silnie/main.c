#include <stdio.h>
#include <stdlib.h>

int factorial(int a, int b){
    int res = 1, i;
    for(i = a; i >= b; i -= b){
        if(a >= b)
            res *= i;
    }
    return res;
}

int main()
{
    int t, n, k, i, res;
    scanf("%d", &t);
    int *A = (int*)calloc(t, sizeof(int));
    for(i = 0; i < t; i++){
        scanf("%d", &n);
        scanf("%d", &k);
        res = factorial(n, k);
        A[i] = res;
    }
    for(i = 0; i < t; i++){
        printf("%d\n", A[i]);
    }
    return 0;
}
