#include <stdio.h>
#include <string.h>
 
#define N 10000
 
int main(){
    char str1[N], str2[N];
    int i, ncasos=0, j, n;
    scanf("%d%*c", &n);
    for (j=0; j<n; j++){
        scanf("%[^ ]%*c", str1);
        scanf("%[^\n]%*c", str2);
        for (i=0; i<strlen(str1); i++){
            while (str1[i] != str2[i]){
                str1[i] += 1;
                ncasos++;
                if (str1[i] == '{') str1[i] = 'a';
            }
        }
        printf("%d\n", ncasos);
        ncasos = 0;
    }
    return 0;
}