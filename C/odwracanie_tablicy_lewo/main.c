#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,M,i,j,x, a = 0, b = 0;
    scanf("%i %i", &N, &M);
    int tab[N][M];
    int tab2[M][N];

    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++){
            scanf("%i", &x);
            tab[i][j] = x;
        }
    }

    for(i = 0; i < N; i++){
        for(j = M-1; j >= 0; j--){
            tab2[j][i] = tab[a][b];
            b++;
            if(b >= M){
                b = 0;
                a++;
            }
        }
    }


    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
           printf("%i ", tab2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
