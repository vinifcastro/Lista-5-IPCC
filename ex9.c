#include <stdio.h>

#define N 10000

/**
 * @brief Função que faz a contagem do tamanho da string sem contar o \0.
 * 
 * @param s String a ser realizada a contagem.
 * @param n Tamanho total da string.
 * @return retorna o tamanho da strinf sem contar o \0.
 */
int lastindex(char * s, int n);

/**
 * @brief Primeira Varredura de criptografia.
 * 
 * @param s String inicial.
 * @param n Número de caracteres na string.
 */
void cripto_1(char * s, int n);

/**
 * @brief Segunda Varredura de criptografia.
 * 
 * @param s String após primeira varredura.
 * @param n Número de caracteres na string.
 */
void cripto_2(char * s, int n);

/**
 * @brief Terceira Varredura de criptografia.
 * 
 * @param s String após segunda varredura.
 * @param n Número de caracteres na string.
 */
void cripto_3(char * s, int n);

int main(){
    char s[N];
    int n, i;
    scanf("%d%*c", &n);
    for(i = 0 ; i < n ; i++){
        scanf("%[^\n]%*c", s);
        cripto_1(s, lastindex(s, N));
        cripto_2(s, lastindex(s, N));
        cripto_3(s, lastindex(s, N));
        printf("%s\n", s);
    }
    return 0;
}

int lastindex(char * s, int n){
    int i=0, k=-1;
    for (i=0; i<n ; i++){
        if (s[i] == '\0') break;
        k++;
    }
    return k;
}

void cripto_1(char * s, int n){
    int i;
    for (i=0; i<=n ; i++){
        if (((int)s[i] >= 'A' && (int)s[i] <= 'Z') || ((int)s[i] >= 'a' && (int)s[i] <= 'z')) s[i] += 3;
    }
}

void cripto_2(char * s, int n){
    int i, k;
    char t[N];
    t[n+1] = '\0';
    k=n;
    for(i=0; i<=n; i++){
        t[k] = s[i];
        k--;
    }
    for(i=0; i<=n; i++){
        s[i] = t[i];
    }
}

void cripto_3(char * s, int n){ 
    int z, i;
    z=(n+1)/2;  
    for(i=z; i<=n; i++){
        s[i] -= 1;
    }
}