#include <stdio.h>
#define N 5000

/**
 * @brief Recebe dados digitados pelo usuário para um vetor qualquer de tamanho n.
 * 
 * @param a Vetor a ser recebido.
 * @param n Tamanho do vetor.
 */
void scan_vet_int(int * a, int n);

/**
 * @brief Faz a impressão de todos os números de um vetor do primeiro valor armazenado até o último.
 * 
 * @param a Vetor a ser recebido.
 * @param n Tamanho do vetor.
 */
void print_vet_int(int * a, int n);

int main(){
    int v[N];
    int n;
    scanf("%d", &n);
    scan_vet_int(v,n);
    print_vet_int(v,n);
    return 0;
}

void scan_vet_int(int * a, int n){
    int i;
    for (i=0 ; i<n ; i++){
        scanf("%d", a);
        a += 1;
    }
}

void print_vet_int(int * a, int n){
    int i;
    for (i=0 ; i<n ; i++){
        printf("%d ", *a);
        a++;
    }
    printf("\n");
}

