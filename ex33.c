#include <stdio.h>

void swap(int * x, int * y);

int main(){
    int n, j[1000], i, k, val1, val2, soma, resto, z;
    scanf("%d", &n);
    for (z=0;z<n;z++){
        soma = 0;    
        for (i=0; i<9; i++){
            scanf("%d", &j[i]);
            soma += j[i];
        }
        resto = soma - 100;
        for (i=0; i<9; i++){
            for (k=i+1; k<9; k++){
                if (resto == (j[i]+j[k])){
                    val1=j[i];
                    val2=j[k];
                }
            }
        }
        for (i=0; i<9 ; i++)
            for(k=i+1; k<9 ; k++) 
                if (j[i] > j[k]) swap(&j[i], &j[k]);
        for (i=0; i<9; i++){
            if (j[i]==val1 || j[i] == val2) continue;
            printf("%d\n", j[i]);
        }
    }
    return 0;
}

void swap(int * x, int * y){
    int temp;
    temp = *y;
    *y = *x;
    *x = temp;
}