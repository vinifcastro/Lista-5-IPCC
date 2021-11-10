#include <stdio.h>

#define N 499

/**
 * @brief Função que realiza a contagem de caracteres em um texto.
 * 
 * @param s Ponteiro que recebe o vetor string.
 * @param n Tamanho do vetor char.
 * @return qtd de caracteres.
 */
int cont_caracters(char * s, int n);

int main(){
    int i, n, j, k;
    char prefixo[N];
    scanf("%d", &n);
    for (i=0; i<n; i++){
        scanf("%d %[^\n]%*c", &j, prefixo);
        if (j==0){
            printf("\n");
            continue;
        }
        else if ((j>=0) && (j<=cont_caracters(prefixo, N))){
            for (k=0; k<j; k++){
                printf("%c", prefixo[k]);
            }
            printf("\n");
        }
        else printf("%s\n", prefixo);
    }
    return 0;
}

int cont_caracters(char * s, int n){
    int i, k=0;
    for (i=0; i<n ; i++){
        if (s[i] == '\0') break;
        k++;
    }
    return k;
}