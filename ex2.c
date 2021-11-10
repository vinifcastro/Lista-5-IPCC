#include <stdio.h>
#define N 1000

/**
 * @brief Recebe dados digitados pelo usuário para um vetor qualquer de tamanho n.
 * 
 * @param a Vetor a ser recebido.
 * @param n Tamanho do vetor.
 */
void scanvetint(int * a, int n);

int main(){
    int v[N];
    int i, n, k, j=0;
    while (1){
        scanf("%d", &n);
        if (n>=1 && n<=1000) break;
    }
    scanvetint(v, n);
    scanf ("%d", &k);
    for (i=0 ; i<n ; i++)
        if (v[i]>=k) j++;
    printf("%d", j);
    return 0;
}

void scanvetint(int * a, int n){
    int i;
    for (i=0 ; i<n ; i++){
        scanf("%d", a);
        a += 1;
    }
}