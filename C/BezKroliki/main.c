#include <stdio.h>
#include <stdlib.h>

int series(int);

int main()
{
    int t, x, i;
    scanf("%d", &t);
    int *A = (int*)calloc(t, sizeof(int));
    for(i = 0; i < t; i++){
        scanf("%d", &x);
        A[i] = series(x);
    }
    for(i = 0; i < t; i++){
        printf("%d\n", A[i]);
    }
    return 0;
}

int series(int x){
    int i;
    int *A = (int*)calloc(x, sizeof(int));
    A[0] = 4;
    A[1] = 7;
    for(i = 2; i <= x; i++){
        A[i] = (2*A[i-1] + 5*A[i-2])%2011;
    }
    return A[x];
}
