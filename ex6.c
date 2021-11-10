#include <stdio.h>

#define N 10000

/**
 * @brief 
 * 
 * @param s 
 * @param n Tamanho total do texto.
 * @param letras Ponteiro que recebe o endereço da variável que conterá a quantidade de letras.
 * @param consoantes Ponteiro que recebe o endereço da variável que conterá a quantidade de consoantes.
 * @param vogais Ponteiro que recebe o endereço da variável que conterá a quantidade de vogais.
 */
void cont_letras_vogais_consoantes(char * s, int n, int * letras, int * consoantes, int * vogais);

int main(){
    int letras, consoantes, vogais, i, n;
    char s[N];
    scanf("%d", &n);
    for (i=0;i<n;i++){
        letras = consoantes = vogais = 0;
        scanf("%*c%[^\n]",s);
        cont_letras_vogais_consoantes(s, N, &letras, &consoantes, &vogais);
        printf("Letras = %d\nVogais = %d\nConsoantes = %d\n", letras, vogais, consoantes);
    }
    return 0;
}

void cont_letras_vogais_consoantes(char * s, int n, int * letras, int * consoantes, int * vogais){
    int i;
    for (i=0; i<n ; i++){
        if (s[i] == '\0') break;
        if(((int)s[i] >= 65 && (int)s[i] <= 90) || ((int)s[i] >= 97 && (int)s[i] <= 122)){
            *letras += 1;
            if (s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U') *vogais += 1;
            else *consoantes += 1;
        }
    }
}