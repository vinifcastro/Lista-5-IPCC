#include <stdio.h>
#include <math.h>

#define N 1000

int main(){
    double coords[N];
    int n, i;
    double x, y, z, maior;
    scanf("%d", &n);
    for(i=0;i<3*n;i++){
        scanf("%lf", &coords[i]);
    }
    for(i=0;i<n-1;i++){
        x = coords[3*i+3] - (coords[3*i]);
        y = coords[3*i+4] - (coords[3*i+1]);
        z = coords[3*i+5] - (coords[3*i+2]);
        if (x<0) x*=-1;
        if (y<0) y*=-1;
        if (z<0) z*=-1;
        maior = x;
        if (y>maior) maior = y;
        if (z>maior) maior = z;
        printf("%.2lf\n", maior);
    }
    return 0;
}