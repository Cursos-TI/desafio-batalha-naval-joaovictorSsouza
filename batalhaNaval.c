#include <stdio.h>

// DESAFIO NOVATO.

// Criando Função para mostrar o tabuleiro
int mostrarTabuleiro(int matriz[10][10]){
    // for para mostrar linha e coluna da matriz

     for (int linha = 0; linha < 10; linha++){
        for (int coluna = 0; coluna < 10; coluna++){
            printf("%d  ", matriz[linha][coluna]);
        }
        printf("\n");
    }

}


int main(){

    int tabuleiro[10][10] = {0}; // Inicializando o tabuleiro
    int navioV[3] = {3, 3, 3}; // navio da vertical 
    int navioH[3] = {3, 3, 3}; // navio horizontal
    int inicio_naviov = 2, inicio_navioh = 3; // posição do inicial do navio

    //Colocando na posição Vertical o navio 
    // verificando a linha por linha da matriz
    for(int coluna = 0; coluna < 3; coluna++){
        tabuleiro[8][inicio_navioh] = navioH[coluna];
        inicio_navioh++;  
    }

    //Colocando na posição horizontal o navio 
    // verificando a coluna por coluna da matriz
    for(int linha = 0; linha < 3; linha++){
        tabuleiro[inicio_naviov][2] = navioV[linha];
        inicio_naviov++;  
    }

    // Exibindo o Tabuleiro.
    mostrarTabuleiro(tabuleiro); 

    return 0;
}