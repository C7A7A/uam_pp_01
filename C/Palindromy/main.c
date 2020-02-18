#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool palin(char *, int);
char *revString(char *, int);
void printRev(char *, int);

int main()
{
    int n, len, i;
    char world[30];
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%s", world);
        len = strlen(world);
        if(palin(world, len)){
            printf("%s==", world);
            printRev(world, len);
        }else{
            printf("%s!=", world);
            printRev(world, len);
        }
    }
}

bool palin(char *world, int len){
    int tmp = len-1, i;
    bool flag = true;
    for(i = 0; i < len/2; i++){
        if(world[i] != world[tmp]){
            flag = false;
        }
        tmp--;
    }
    if(flag == false){
        return false;
    }else{
        return true;
    }

}

char *revString(char *world, int len){
    char *reversedWorld = malloc(len * sizeof(char));
    int temp = len-1, i;
    for(i = 0; i < len; i++){
        reversedWorld[i] = world[temp];
        temp--;
    }
    return reversedWorld;
}

void printRev(char *world, int len){
    int i;
    for(i = len-1; i >= 0; i--){
            printf("%c", world[i]);
    }
    printf("\n");
}

