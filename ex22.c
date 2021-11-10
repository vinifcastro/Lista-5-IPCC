#include <stdio.h>

#define N 5000

int main(){
    int i, j, n, vet[N], numig = 0, nnrep = 0;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &vet[i]);
    }
    for(i=0;i<n;i++){
        for (j=0;j<n;j++){
            if (j==i) continue;
            else{
                if (vet[i] == vet[j]) numig = 1;
            }
        }
        if (numig != 1) nnrep++;
        numig = 0;
    }
    printf("%d\n", nnrep);
    return 0;
}