#include <stdio.h>
#include <string.h>

#define N 1000

int main(){
    int n, d, i, j, k, z;
    unsigned long int g;
    char vet[N], seq;
    while (1){
        scanf("%d %d", &n, &d);
        if (n==0 && d==0) break;
        j=n;
        scanf("%lu", &g);
        sprintf(vet, "%lu", g);
        seq = '0';
        while (1){
            k=0;
            for (i=0; i<n; i++){
                if (seq == vet[i]){
                    k=1;
                    j--;
                    vet[i] = 'x';
                    i=n;
                }
            }
            if (k==0) seq++;
            if (j==d) break;
        }
        for (i=0; i<n; i++)
            if (vet[i]!='x') printf("%c", vet[i]);
        printf("\n");
    }
    return 0;
}