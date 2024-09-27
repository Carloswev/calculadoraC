#include <stdio.h>
#include <stdlib.h>
#include "operacoes.h"  // Incluindo o cabeçalho com as declarações das funções

int main() {
    int opcao;

    while (1) {
        printf("\nCalculadora Simples\n");
        printf("1. Soma\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                soma();  // Chamada para a função soma (implementada em operacoes.c)
                break;
            case 2:
                subtracao();  // Chamada para a função subtracao
                break;
            case 3:
                multiplicacao();  // Chamada para a função multiplicacao
                break;
            case 4:
                divisao();  // Chamada para a função divisao
                break;
            case 5:
                exit(0);  // Encerra o programa
            default:
                printf("Opção inválida!\n");
        }
    }

    return 0;
}
