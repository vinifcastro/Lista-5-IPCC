#include <stdio.h>

#define N 10000

void invertvet(int * s, int n);

int main(){
    int bin[N], n, i, maior, menor;
    scanf("%d", &n);
    for (i = 0 ; i < n ; i++){
        scanf("%d", &bin[i]);
        if (i==0){
            menor = maior = bin[i];
        }
        if (bin[i] > maior) maior = bin[i];
        if (bin[i] < menor) menor = bin[i];
    }
    for (i=0;i<n;i++){
        if(i != (n-1)) printf("%d ", bin[i]);
        else printf("%d", bin[i]);
    }
    printf("\n");
    for (i=n-1;i>=0;i--){
        if(i != (0)) printf("%d ", bin[i]);
        else printf("%d", bin[i]);
    }
    printf("\n");
    printf("%d\n", maior);
    printf("%d\n", menor);
    return 0;
}