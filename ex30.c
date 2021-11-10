#include <stdio.h>
#include <string.h>
#include <math.h>

#define A 0
#define E 1
#define I 2
#define O 3
#define U 4
#define N 1000

/**
 * @brief Função que retorna a quantidade de vogais em certo ponto da string.
 * 
 * @param p String
 * @param n Indice inicial
 * @param g Indice Final
 * @param z Vetor com número de vogais.
 */
void contavogais (char * p, int n, int g, int * z);

int main(){
    char string[N], string2[N];
    double x;
    int fsa[5], fsb[5], i;
    for (i=0; i<5; i++) 
        fsa[i] = fsb[i] = 0;

    scanf("%[^;]", string);
    scanf("%[^\n]", string2);
    if (string2[0] != ';'){
        printf("FORMATO INVALIDO!\n");
        return 0;
    }
    contavogais(string, 0, strlen(string), fsa);
    contavogais(string2, 0, strlen(string2), fsb);
    x = (double)(sqrt( ( (((fsa[A])-(fsb[A]))*((fsa[A])-(fsb[A]))) + (((fsa[E])-(fsb[E]))*((fsa[E])-(fsb[E]))) + (((fsa[I])-(fsb[I]))*((fsa[I])-(fsb[I]))) + (((fsa[O])-(fsb[O]))*((fsa[O])-(fsb[O]))) + (((fsa[U])-(fsb[U]))*((fsa[U])-(fsb[U]))) ) ));
    printf("(%d,%d,%d,%d,%d)\n(%d,%d,%d,%d,%d)\n%.2lf\n", fsa[A], fsa[E], fsa[I], fsa[O], fsa[U], fsb[A], fsb[E], fsb[I], fsb[O], fsb[U], x);
    return 0;
}

void contavogais (char * p, int n, int g, int * z){
    int j;
    for (j=n; j<g; j++){
        if (p[j] >= 'A' && p[j] <= 'Z') p[j] += 32;
        if (p[j]=='a') z[A]++;
        else if (p[j]=='e') z[E]++;
        else if (p[j]=='i') z[I]++;
        else if (p[j]=='o') z[O]++;
        else if (p[j]=='u') z[U]++; 
    }
}