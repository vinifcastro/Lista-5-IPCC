#include <stdio.h>

int main(){
    int a[100], b[100], uniao[200], intersec[200];
    int ta=-1, tb=-1, i, nig=0, k, z, j, y=0, m, n=0;
    while (ta<1 || ta>100){
        scanf("%d", &ta);
    }
    while (tb<1 || tb>100){
        scanf("%d", &tb);
    }
    for (i=0; i<ta; i++){
        scanf("%d", &z);
        for (k=0; k<i;k++){
            if (z==a[k]) {
                i--;
                k = i+1;
            }
        }
        a[i]=z;
    }
    for (i=0; i<tb; i++){
        scanf("%d", &z);
        for (k=0; k<i;k++){
            if (z==b[k]) {
                i--;
                k = i+1;
            }
        }
        b[i]=z;
    }
    for (i=0; i<ta; i++){
        uniao[y] = a[i];
        y++;
    }
    for (i=0; i<tb; i++){
        j=0;
        for (m=0; m<y; m++){
            if (b[i]==uniao[m]){
                j=1;
                m=y;
            }
        }
        if (j==0){
            uniao[y] = b[i];
            y++;
        }
    }
    for (i=0; i<tb; i++){
        j=0;
        for (m=0; m<ta; m++){
            if (b[i]==a[m]){
                j=1;
                m=ta;
            }
        }
        if (j==1){
            intersec[n] = b[i];
            n++;
        }
    }
    printf("(");
    for (i=0; i<y; i++) {
        if (i==y-1) printf("%d", uniao[i]);
        else printf("%d,", uniao[i]);
    }
    printf(")\n");
    printf("(");
    for (i=0; i<n; i++) {
        if (i==n-1) printf("%d", intersec[i]);
        else printf("%d,", intersec[i]);
    }
    printf(")\n");
    return 0;
}