#include <stdio.h>
#include <string.h>

#define N 257

/**
 * @brief Remove caracteres de uma string
 * 
 * @param str String Inteira.
 * @param clr String com caracteres a serem retirados da string inteira.
 */
void str_clean(char * str,char * clr);

int main(){
    char str[N], clr[N];
    scanf("%[^\n]", str);
    scanf("\n%[^\n]", clr);
    str_clean(str, clr);
    printf("%s\n", str);
    return 0;
}

void str_clean(char * str,char * clr){
    int i, k, j;
    for (i=0; i<strlen(clr); i++){
        for (k=0; k<strlen(str); k++){
            if (clr[i] == str[k]) {
                for (j=k; j < strlen(str); j++){
                    str[j] = str[j+1];
                }
                k-=1;
            }
        }
    }
}