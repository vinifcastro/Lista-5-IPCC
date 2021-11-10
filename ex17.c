#include <stdio.h>
#include <string.h>

#define N 499

/**
 * @brief Função que acha o indice de um caractere z em uma string s de tamanho n.
 * 
 * @param s String.
 * @param z Caractere a ser encontrado na string.
 * @param n Tamanho da string.
 * @return Retorna -1 quando o caractere z não é achado na string, caso seja achado ele retorna o indice do caractere na string, sendo que o indice != -1.
 */
int achechar(char * s, char z);

/**
 * @brief Função que realiza a contagem de caracteres em um texto.
 * 
 * @param s Ponteiro que recebe o vetor string.
 * @param n Tamanho do vetor char.
 * @return qtd de caracteres.
 */
int cont_caracters(char * s, int n);

int main(){
    char z, s[N];
    int i, n, x;
    scanf("%d%*c", &n);
    for (i=0; i<n; i++){
        scanf("%c%*c", &z);
        scanf("%[^\n]%*c", s);
        x = achechar(s, z);
        if (x==-1) printf("Caractere %c nao encontrado.\n", z);
        else printf("Caractere %c encontrado no indice %d da string.\n", z, x);
    }
    return 0;
}

int achechar(char * s, char z){
    int k, j=-1, n;
    n =cont_caracters(s, N);
    for (k=0; k<=n; k++){
        if(s[k]==z){
            j=k;
            break;
        }
    }
    return j;
}

int cont_caracters(char * s, int n){
    int i, k=0;
    for (i=0; i<n ; i++){
        if (s[i] == '\0') break;
        k++;
    }
    return k;
}