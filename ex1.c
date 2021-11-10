#include <stdio.h>
#define N 100000


int main(){
    int v[N];
    int n, m, i, x, j;

    scanf("%d", &n);
    for (i=0;i<n;i++){
        scanf("%d%*c", &v[i]);
    }
    scanf("%d", &m);
    for (i=0;i<m;i++){
        scanf("%d", &x);
        for(j=0; j<n ; j++){
            if (x == v[j]){
                printf("ACHEI\n");
                break;
            }
            else if ((j == n-1) && (x!=v[j])) printf ("NAO ACHEI\n");
        }
    }
    return 0;
}