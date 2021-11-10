#include <stdio.h>

int main(){
    int sena=0, quina=0, quadra=0, resultado[6], i, j, n, z, seq=0, k;
    for (j=0 ; j<6 ; j++)
        scanf("%d", &resultado[j]);
    scanf("%d", &n);
    for (j=0 ; j<n ; j++){
        for (i=0 ; i<6 ; i++){
            scanf("%d", &z);
            for (k=0 ; k<6 ; k++){
                if (z == resultado[k]){
                    seq++;
                    k=6;
                }
            }
        }
        if (seq==6) sena++;
        else if (seq==5) quina++;
        else if (seq==4) quadra++;
        seq = 0;
    }
    if (sena!=0) printf("Houve %d acertador(es) da sena\n", sena);
    else printf("Nao houve acertador para sena\n");
    if (quina!=0) printf("Houve %d acertador(es) da quina\n", quina);
    else printf("Nao houve acertador para quina\n");
    if (quadra!=0) printf("Houve %d acertador(es) da quadra\n", quadra);
    else printf("Nao houve acertador para quadra\n");
    return 0;
}