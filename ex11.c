#include <stdio.h>

#define N 10000

int main(){
    int n,i, maior=-1, k = 1, j, imaior;
    int x[N];
    scanf("%d", &n);
    for(i=0 ; i<n ; i++){
        scanf("%d", &x[i]);
        if(x[i]>maior){
            maior = x[i];
            imaior = i;
        }
    }
    for (i=0 ; i<n-1 ; i++){
        if (x[i] == x[n-1]) k++;
    }

    
    printf("Nota %d, %d vezes\nNota %d, indice %d\n", x[n-1], k, maior, imaior);
    return 0;
}