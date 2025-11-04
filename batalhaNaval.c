#include <stdio.h>

// DESAFIO AVENTUREIRO.

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
    int navio[3] = {3, 3, 3}; // navio da vertical 
    int inicio_naviov = 2, inicio_navioh = 3;
    int diagonal1_linha = 0, diagonal1_coluna = 4;  // posição do inicial do navio
    int diagonal2_linha = 6, diagonal2_coluna = 2;

    //Colocando na posição Vertical o navio 
    for(int coluna = 0; coluna < 3; coluna++){// verificando a coluna por colunna da matriz
        tabuleiro[8][inicio_navioh] = navio[coluna];
        inicio_navioh++;  
    }

    //Colocando na posição horizontal o navio 
    for(int linha = 0; linha < 3; linha++){// verificando a linha por linha da matriz
        tabuleiro[inicio_naviov][2] = navio[linha];
        inicio_naviov++;  
    }

    // Colocando o primeiro navio na diagonal
    for (int linha = 0; linha < 3; linha++){//verificando linha por linha
        tabuleiro[diagonal1_linha][diagonal1_coluna] = navio[linha];
        diagonal1_linha++;
        diagonal1_coluna++;
    }

    // Colocando o segundo navio na diagonal
    for (int linha = 0; linha < 3; linha++){//Verificando linha por linha
        tabuleiro[diagonal2_linha][diagonal2_coluna] = navio[linha];
        diagonal2_linha++;
        diagonal2_coluna--;
    }

    // Exibindo o Tabuleiro.
    mostrarTabuleiro(tabuleiro); 

    return 0;
}