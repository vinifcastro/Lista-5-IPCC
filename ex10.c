#include <stdio.h>
#define N 33

/**
 * @brief Função que armazena os restos de n no vetor.
 * 
 * @param s Vetor que receberá os restos por 2.
 * @param n Valor decimal.
 * @return Retorna o ultimo índice alterado do vetor.
 */
int calcbin(int * s, long unsigned int n);

int main(){
    int bin[N], j;
    long unsigned int n;
    while (scanf("%lu", &n) != EOF){
        for (j=calcbin(bin, n) ; j>=0 ; j--){
            printf("%d", bin[j]);
        }
        printf("\n");
    }
    return 0;
}

int calcbin(int * s,long unsigned int n){
    int i=0;
    if (n==0) {
        s[i] = 0;
        return 0;
    }
    while (1){
        if (n==0) break;
        s[i] = n%2;
        n = n/2;
        i++;
    }
    return i-1;
}