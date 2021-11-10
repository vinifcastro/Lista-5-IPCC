#include <stdio.h>

void swap(int * x, int * y);

int main(){
    int q1, q2, i, k, n;
    int vr[1000];
    scanf("%d", &q1);
    scanf("%d", &q2);
    n=q1+q2;
    for (i=0;i<n;i++)
        scanf("%d", &vr[i]);
    for (i=0; i<n ; i++)
        for(k=i+1; k<n ; k++) 
            if (vr[i] > vr[k]) swap(&vr[i], &vr[k]);
    for (i=0; i<n ; i++) printf("%d\n", vr[i]);
    return 0;
}

void swap(int * x, int * y){
    int temp;
    temp = *y;
    *y = *x;
    *x = temp;
}