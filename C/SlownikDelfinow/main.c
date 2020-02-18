#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void sortStr(char **str, int len);

int main(int argc, char *argv[]) {
	int n, i;
	scanf("%d", &n);
	char **str = (char**)calloc(n, sizeof(char*));
	for(i = 0; i < n; i++){
		str[i] = (char*)calloc(21, sizeof(char));
	}

	for(i = 0; i < n; i++){
		scanf("%s", str[i]);
	}

	sortStr(str, n);

	printf("\n");

	for(i = 0; i < n; i++){
		printf("%s\n", str[i]);
	}

	return 0;
}

void sortStr(char **str, int len){
	int i, j, elem;
	char tmp[21];
	do{
		for(i = 0; i < len-1; i++){
        	if(strlen(str[i]) > strlen(str[i+1])){
        		elem = strlen(str[i+1]);
			}else{
				elem = strlen(str[i]);
			}

			for(j = 0; j < elem; j++){
				if(str[i][j] > str[i+1][j]){
					/* printf("%c %c\n", str[i][j], str[i+1][j]); */
					strcpy(tmp, str[i]);
					strcpy(str[i], str[i+1]);
					strcpy(str[i+1], tmp);
					break;
				}else if(str[i][j] < str[i+1][j]){
                    break;
				}
				if(j == elem-1){
					if(elem = strlen(str[i+1])){
						strcpy(tmp, str[i]);
						strcpy(str[i], str[i+1]);
						strcpy(str[i+1], tmp);
					}
				}

			}
		}
		len -= 1;
	}while(len > 1);
}
