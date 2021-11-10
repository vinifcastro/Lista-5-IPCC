#include <stdio.h>

#define N 11

int main(){
    int cpf[11];
    int i, resto1, resto2, k, n;
        
    scanf("%d", &n);
    for (k=0; k<n; k++){
        resto1 = resto2 = 0;
        for (i=0; i<11; i++) {
            scanf("%d", &cpf[i]);
        }
        for (i=0; i<9; i++) {
            resto1 += cpf[i]*(i+1);
        }
        resto1 = resto1%11;

        if (resto1 == 10) resto1 = 0;

        for (i=9; i>0; i--) {
            resto2 += cpf[9-i]*(i);
        }
        resto2 = resto2%11;

        if (resto2 == 10) resto2 = 0;
        
        if (resto1 == cpf[9] && resto2 == cpf[10]) printf("CPF valido\n");
        else printf("CPF invalido\n");
    }

    return 0;
}