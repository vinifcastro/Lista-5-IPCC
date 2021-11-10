#include <stdio.h>
#define N 5000

/**
 * @brief Função que imprime todos os caracteres de uma string, menos o 0.
 * 
 * @param s Vetor char.
 * @param n Tamanho do vetor.
 */
void print_string_no0(char * s, int n);

int main(){
    char s[N];
    int n, m, soma;
    scanf("%d %d", &m, &n);
    while (n!=0 && m!=0){
        soma = m+n;
        sprintf(s, "%d", soma);
        if (soma != 0) print_string_no0(s, N);
        scanf("%d %d", &m, &n);
    }
    return 0;
}

void print_string_no0(char * s, int n){
    int i;
    for (i=0 ; i < n ; i++){
        if (s[i] == '\0') break;
        if (s[i] != '0') printf ("%c", s[i]);
    }
    printf("\n");
}
