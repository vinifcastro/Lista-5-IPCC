#include <stdio.h>
#include <string.h>

#define N 150000

int main(){
    int n, i, z, y, j, t;
    char * p;
    char x[N];
    scanf("%d", &n);
    for (i=0; i<n; i++){
        scanf("%d %d", &z, &y);
        p = x;
        for (j=z; j<=y; j++){
            sprintf(p, "%d", j);
            t = strlen(x);
            p = x + t;
        }
        printf("%s", x);
        t-=1;
        while(t>=0){
            printf("%c", x[t]);
            t--;
        }
        printf("\n");
    }
    return 0;
}