#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código implementa o sistema de Batalha Naval em três níveis de complexidade.

// Função para o Nível Novato - Posicionamento básico de navios
void nivelNovato() {
    printf("\n===== NIVEL NOVATO =====\n\n");
    
    // Declaração do tabuleiro 5x5
    int tabuleiro[5][5] = {0}; // Inicializa todas as posições com 0
    
    // Posicionamento do navio vertical (3 posições)
    int navioVertical_x = 1; // Coordenada x fixa
    int navioVertical_y_inicio = 1;
    int navioVertical_y_fim = 3;
    
    // Posicionamento do navio horizontal (4 posições)
    int navioHorizontal_y = 4; // Coordenada y fixa
    int navioHorizontal_x_inicio = 2;
    int navioHorizontal_x_fim = 5;
    
    // Marcando as posições dos navios no tabuleiro
    printf("Posicoes do navio vertical:\n");
    for (int y = navioVertical_y_inicio; y <= navioVertical_y_fim; y++) {
        tabuleiro[y-1][navioVertical_x-1] = 1; // Marca como ocupado
        printf("Coordenada: (%d, %d)\n", navioVertical_x, y);
    }
    
    printf("\nPosicoes do navio horizontal:\n");
    for (int x = navioHorizontal_x_inicio; x <= navioHorizontal_x_fim; x++) {
        tabuleiro[navioHorizontal_y-1][x-1] = 1; // Marca como ocupado
        printf("Coordenada: (%d, %d)\n", x, navioHorizontal_y);
    }
}

// Função para o Nível Aventureiro - Tabuleiro expandido e posicionamento diagonal
void nivelAventureiro() {
    printf("\n===== NIVEL AVENTUREIRO =====\n\n");
    
    // Declaração do tabuleiro 10x10
    int tabuleiro[10][10] = {0}; // Inicializa todas as posições com 0
    
    // Posicionamento do navio vertical (3 posições)
    int navioVertical_x = 2;
    int navioVertical_y_inicio = 1;
    int navioVertical_y_fim = 3;
    
    // Posicionamento do navio horizontal (4 posições)
    int navioHorizontal_y = 8;
    int navioHorizontal_x_inicio = 5;
    int navioHorizontal_x_fim = 8;
    
    // Posicionamento do navio diagonal 1 (3 posições, de cima-esquerda para baixo-direita)
    int navioDiagonal1_x_inicio = 1;
    int navioDiagonal1_y_inicio = 5;
    int navioDiagonal1_tamanho = 3;
    
    // Posicionamento do navio diagonal 2 (3 posições, de cima-direita para baixo-esquerda)
    int navioDiagonal2_x_inicio = 9;
    int navioDiagonal2_y_inicio = 1;
    int navioDiagonal2_tamanho = 3;
    
    // Marcando as posições dos navios no tabuleiro
    // Navio vertical
    for (int y = navioVertical_y_inicio; y <= navioVertical_y_fim; y++) {
        tabuleiro[y-1][navioVertical_x-1] = 3; // Marca como ocupado (valor 3)
    }
    
    // Navio horizontal
    for (int x = navioHorizontal_x_inicio; x <= navioHorizontal_x_fim; x++) {
        tabuleiro[navioHorizontal_y-1][x-1] = 3; // Marca como ocupado (valor 3)
    }
    
    // Navio diagonal 1 (cima-esquerda para baixo-direita)
    for (int i = 0; i < navioDiagonal1_tamanho; i++) {
        tabuleiro[navioDiagonal1_y_inicio-1+i][navioDiagonal1_x_inicio-1+i] = 3; // Marca como ocupado (valor 3)
    }
    
    // Navio diagonal 2 (cima-direita para baixo-esquerda)
    for (int i = 0; i < navioDiagonal2_tamanho; i++) {
        tabuleiro[navioDiagonal2_y_inicio-1+i][navioDiagonal2_x_inicio-1-i] = 3; // Marca como ocupado (valor 3)
    }
    
    // Exibindo o tabuleiro completo
    printf("Tabuleiro 10x10 (0 = vazio, 3 = navio):\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para o Nível Mestre - Habilidades especiais com matrizes
void nivelMestre() {
    printf("\n===== NIVEL MESTRE =====\n\n");
    
    // Criando as matrizes para as habilidades especiais
    // Habilidade em cone (5x3)
    int habilidadeCone[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}
    };
    
    // Habilidade em octaedro (5x3)
    int habilidadeOctaedro[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };
    
    // Habilidade em cruz (5x3)
    int habilidadeCruz[3][5] = {
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0}
    };
    
    // Exibindo as áreas afetadas pelas habilidades
    printf("Habilidade em Cone:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", habilidadeCone[i][j]);
        }
        printf("\n");
    }
    
    printf("\nHabilidade em Octaedro:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", habilidadeOctaedro[i][j]);
        }
        printf("\n");
    }
    
    printf("\nHabilidade em Cruz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", habilidadeCruz[i][j]);
        }
        printf("\n");
    }
    
    // Demonstração de aplicação de habilidade em um tabuleiro 10x10
    printf("\nDemonstracao de aplicacao da habilidade Cruz em um tabuleiro 10x10:\n");
    int tabuleiro[10][10] = {0}; // Inicializa todas as posições com 0
    
    // Posição central para aplicar a habilidade Cruz
    int centro_x = 5;
    int centro_y = 5;
    
    // Aplicando a habilidade Cruz no tabuleiro
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            // Calculando as coordenadas no tabuleiro
            int tab_y = centro_y - 1 + i;
            int tab_x = centro_x - 2 + j;
            
            // Verificando se está dentro dos limites do tabuleiro
            if (tab_x >= 0 && tab_x < 10 && tab_y >= 0 && tab_y < 10) {
                tabuleiro[tab_y][tab_x] = habilidadeCruz[i][j];
            }
        }
    }
    
    // Exibindo o tabuleiro com a habilidade aplicada
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    printf("DESAFIO BATALHA NAVAL - TRES NIVEIS DE COMPLEXIDADE\n");
    printf("=================================================\n");
    
    // Executando os três níveis do desafio
    nivelNovato();
    nivelAventureiro();
    nivelMestre();
    
    return 0;
}
