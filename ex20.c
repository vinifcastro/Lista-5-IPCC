#include <stdio.h>

#define N 1000

int main(){
    int k, i, n, j[N], x=0;
    scanf("%d %d", &n, &k);
    for (i=0; i<n; i++){
        scanf("%d", &j[i]);
        if (j[i]<=0) x++;
    }
    if (x >= k){
        printf("NAO\n");
        for (i=n-1; i>=0; i--){
            if (j[i]<=0) printf("%d\n", i+1);
        }
    }
    else{
        printf("SIM\n");
    }
    return 0;
}