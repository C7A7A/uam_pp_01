#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i, j, y, a, b, z;
    scanf("%d", &x);
    int *A = (int*)calloc(x+1, sizeof(int));
    for(i = 1; i <= x; i++){
        scanf("%d", &y);
        A[i] = y;
    }
    scanf("%d", &z);
    int *B = (int*)calloc(z, sizeof(int));
    for(i = 0; i < z; i++){
        scanf("%d", &a);
        scanf("%d", &b);
        for(j = a; j <= b; j++){
            B[i] += A[j];
        }
    }
    for(i = 0; i < z; i++){
        printf("%d\n", B[i]);
    }
    return 0;
}
