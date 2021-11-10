#include <stdio.h>
#include <string.h>

#define N 6000

int main(){
    char str[N], j;
    int alit=0, seq=1, i=0, x, n;
    while (scanf("%[^\n]%*c", str) != EOF){
        j = str[0];
        for (i=1; i<strlen(str); i++){
            if (str[i] == ' '){
                if ((int)str[i+1] > 90) x = -32;
                else x=32;
                if (((int)str[i+1] == (int)j) || (((int)str[i+1] + x) == (int)j)){
                    seq++;
                }
                else{
                    if (seq >= 2) alit++;
                    seq = 1;
                }
                j = str[i+1];
            }
            else continue;
        }
        if (seq >= 2) alit++;
        seq = 1;
        printf("%d\n", alit);
        alit = 0;
    }
    return 0;
}