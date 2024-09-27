#include <stdio.h>
#include "operacoes.h"

void soma() {
    double num1, num2;  // Declaração correta de num1 e num2
    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);  // Leitura do primeiro número
    printf("Digite o segundo número: ");
    scanf("%lf", &num2);  // Leitura do segundo número
    printf("Resultado da soma: %.2lf\n", num1 + num2);  // Exibe o resultado da soma
}
