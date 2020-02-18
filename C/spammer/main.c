#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i, counter = 0;
    scanf("%d", &n);
    char **nick = (char**)malloc(n * sizeof(char*));
    for(i = 0; i < n; i++){
        nick[i] = (char*)malloc(21 * sizeof(char));
    }
    char *spamer = (char*)malloc(21 * sizeof(char));

    for(i = 0; i < n; i++){
        scanf("%s", nick[i]);
    }

    scanf("%s", spamer);

    for(i = 0; i < n; i++){
        if(strcmp(spamer, nick[i]) == 0){
            counter++;
        }
    }

    printf("%d", counter);


    return 0;
}
