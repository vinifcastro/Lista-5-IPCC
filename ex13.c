#include <stdio.h>

#define N 1000

void swap(int * x, int * y);

int main(){
    int ordercres[N];
    int i, n, k;
    scanf("%d", &n);
    for (i=0; i<n ; i++) scanf("%d", &ordercres[i]);
    for (i=0; i<n ; i++)
        for(k=i+1; k<n ; k++) 
            if (ordercres[i] > ordercres[k]) swap(&ordercres[i], &ordercres[k]);
    for (i=0; i<n ; i++) printf("%d\n", ordercres[i]);        
    return 0;
}

void swap(int * x, int * y){
    int temp;
    temp = *y;
    *y = *x;
    *x = temp;
}