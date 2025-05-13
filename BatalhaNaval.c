#include <stdio.h>

int main(){

    for(char letra = 'A'; letra <= 'J'; letra++) {
        printf(" %c", letra);
    }
    
    printf("\n");

    
    //Declarando tabuleiro
    int tabuleiro[10][10]; 
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    //Posicionando Navio 1(horizontal)

    int navio1[3] = {4,5,6}; //Declarando que na linha X, vai estar nas posições 0,1,2.
    for(int a = 0; a < 3; a++) {
        tabuleiro[2][navio1[a]] = 3; //Declarando que vai estar na linha 5.
    }

    //Posicionando Navio 2(vertical)
    
    int navio2[3] = {6,7,8}; //Declarando que na coluna X, vai estar nas posições 0,1,2.
    for(int b = 0; b < 3; b++) {
        tabuleiro[navio2[b]][7] = 3; //Declarando que vai estar na coluna 8.
    }

    //Imprimindo Tabuleiro
    for(int i = 0; i < 10; i++) {
        printf("%i ", 1 + i);
        for (int j = 0; j < 10; j++) {
            printf("%i ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;

}