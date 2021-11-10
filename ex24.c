#include <stdio.h>

#define N 1000

void swap(int * x, int * y);

int main(){
    int i, n, a[N], k;
    scanf("%d", &n);
    for (i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for (i=0;i<n;i++) {
        for (k=0;k<n;k++) {
            if (a[i] == a[k] && i!=k) a[i] = -100000000;
        }
    }
    for (i=0; i<n ; i++)
        for(k=i+1; k<n ; k++) 
            if (a[i] > a[k]) swap(&a[i], &a[k]);

    for (i=0;i<n;i++)
        if (a[i] != -100000000) printf("%d\n", a[i]);
        
    return 0;
}

void swap(int * x, int * y){
    int temp;
    temp = *y;
    *y = *x;
    *x = temp;
}