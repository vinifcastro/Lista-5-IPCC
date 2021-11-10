#include <stdio.h>
#include <string.h>

#define N 50

int main(){
    int k, i;
    char str[N];
    while (scanf("%[^\n]%*c", str) != EOF){
        k=0;
        for (i=0; i<strlen(str); i++){
            if (((str[i] >= 'a') && (str[i] <='z')) || ((str[i] >= 'A') && (str[i] <='Z'))){
                if (k==0){
                    if((str[i] >= 'a') && (str[i] <='z')) str[i] -= 32;
                    k=1;
                }
                else if (k==1){
                    if((str[i] >= 'A') && (str[i] <='Z')) str[i] += 32;
                    k=0;
                }
            }
            else continue;
        }
        printf("%s\n", str);
    }
    return 0;
}