#include <stdio.h>

#define N 100000

int main(){
    int x[N];
    int i, n, j, menor, k, z, menorf;
    scanf("%d", &z);
    for (k=0; k<z; k++){
        scanf("%d", &n);
        for (i=0; i<n ; i++) scanf("%d", &x[i]);
        if (x[0] >= x[1]) menorf = x[0] - x[1];
        else menorf = x[1] - x[0];
        for (i=0; i<n ; i++){
            for (j=0; j<n ; j++){
                if(i!=j){
                    if (x[i] <= x[j]) menor = x[j] - x[i];
                    else menor = x[i] - x[j];
                    if (menor < menorf) menorf = menor;
                }
            }
        }
        printf("%d %d\n", menorf, n*n);
    }
    return 0;
}