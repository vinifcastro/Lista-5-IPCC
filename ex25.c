#include <stdio.h>
#include <string.h>

#define N 201

/**
 * @brief Realiza a troca entre 2 caracteres.
 * 
 * @param x Char 1.
 * @param y Char 2.
 */
void swap(char * x, char * y);

/**
 * @brief Realiza a contagem de qual letra se repete mais.
 * 
 * @param x String.
 * @param n Tamanho da string.
 * @return o valor de repetições da letra que mais repetiu.
 */
int maiorseq(char * x, int n);

/**
 * @brief 
 * 
 * @param a String.
 * @param b Vetor que receberá os caracteres que mais se repetem.
 * @param n Quantidade de vezes em que o caractere com mais frequencia apareceu.
 * @param m Tamanho da String.
 */
void charrepmaior(char * a, char * b, int n, int m);

/**
 * @brief Realiza a ordenação em ordem alfabetica de uma string.
 * 
 * @param z String.
 * @param n Tamanho da string.
 */
void bubblesort(char * z, int n);

int main(){
    char string[N], x[N];
    int n, i, maior=-1, seq, k, z;
    scanf("%d%*c", &n);
    while (n>0){
        z=0;
        scanf("%[^\n]%*c", string);
        for (i=0; i<strlen(string); i++){
            x[i] = '\0';
        }
        for (i=0; i<strlen(string); i++){
            if (string[i] >= 'A' && string[i] <= 'Z') string[i] += 32;
        }
        charrepmaior(string, x, maiorseq(string, strlen(string)), strlen(string));
        bubblesort(x, strlen(x));
        printf("%s\n", x);
        n--;
    }
    return 0;
}

void swap(char * x, char * y){
    char temp;
    temp = *y;
    *y = *x;
    *x = temp;
}

int maiorseq(char * x, int n){
    int i, seq = 0, k, maior=-1;
    for (i=0; i<n; i++){
            for (k=0; k<n; k++){
                if (x[i] >= 'a' && x[i] <= 'z'){
                    if (x[i] == x[k]) seq++; 
                }
            }
            if (seq > maior){
                maior = seq;
            }
            seq = 0;
        }
    return maior;
}

void charrepmaior(char * a, char * b, int n, int m){
    int i, k, seq, z=0, j, l;
    for(i=0; i<m; i++){
        seq = 0;
        if (a[i] >= 'a' && a[i]<='z'){
            for(k=0; k<m; k++){
                if (a[i]==a[k]) seq++;
            }
            if (seq == n){
                l=0;
                for (j=0; j<z; j++){
                    if (a[i] == b[j]) l=1;
                }
                if (l==0){
                    b[z] = a[i];
                    z++;
                }
            }
        }
        else continue;
    }
}

void bubblesort(char * z, int n){
    int i, k;
    for (i=0; i<n ; i++)
        for(k=i+1; k<n ; k++) 
            if ((int)z[i] > (int)z[k]) swap(&z[i], &z[k]);
}