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
    int n, i, j=0;
    scanf("%d", &n);
    scanvetint(v,n);
    for (i=0; i<n ; i++){
        if ((v[i]%2) == 0){
            printf("%d ", v[i]);
            j++;
        }
    }
    printf("%d\n", j);
    return 0;
}

void scanvetint(int * a, int n){
    int i;
    for (i=0 ; i<n ; i++){
        scanf("%d", a);
        a += 1;
    }
}