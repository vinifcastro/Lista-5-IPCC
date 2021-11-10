#include <stdio.h>

#define N 100000

int main(){
    int x[N];
    int i, n, k=1, j, kf=-1, number;
    scanf("%d", &n);
    for (i=0; i<n ; i++) scanf("%d", &x[i]);
    for (i=0; i<n ; i++){
        for (j=0; j<n ; j++){
            if(i!=j)
                if (x[i] == x[j]) k++;
        }
        if (k>kf){
            kf = k;
            number = x[i];
        }
        k = 1;
    }
    printf("%d\n%d\n", number, kf);
    return 0;
}