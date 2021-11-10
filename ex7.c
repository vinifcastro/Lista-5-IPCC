#include <stdio.h>

#define N 10000

/**
 * @brief Função que realiza a contagem de caracteres em um texto.
 * 
 * @param s Ponteiro que recebe o vetor string.
 * @param n Tamanho do vetor char.
 * @return qtd de caracteres.
 */
int cont_caracters(char * s, int n);

int main(){
    char two[3] = {'t','w','o'}, one[3] = {'o','n','e'}, s[N];
    int n, i, um = 0, dois = 0, k, j = 0;
    scanf("%d", &n);
    for (i=0 ; i<n ; i++){
        scanf("%*c%[^\n]",s);
        if (cont_caracters(s, N) == 3){
            for(k=0; k<3 ; k++){
                if (s[k] == one[k]) um++;
                if (s[k] == two[k]) dois++;
            }
            if (um > dois) printf("1\n");
            else printf("2\n");
        }
        else printf("3\n");
        um = dois = 0;
    }
    return 0;
}

int cont_caracters(char * s, int n){
    int i, k;
    for (i=0; i<n ; i++){
        if (s[i] == '\0') break;
        k++;
    }
    return k;
}