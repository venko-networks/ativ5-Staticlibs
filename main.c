#include <stdio.h>
#include "mathlib.h"

int main() {
    printf("=== Atividade 5 - Bibliotecas Estáticas ===\n\n");

    int a = 10, b = 3;

    printf("Operações com a=%d e b=%d:\n", a, b);
    printf("  Soma:           %d\n", somar(a, b));
    printf("  Subtração:      %d\n", subtrair(a, b));
    printf("  Multiplicação:  %d\n", multiplicar(a, b));
    printf("  Divisão:        %.2f\n", dividir((float)a, (float)b));
    printf("  Fatorial de %d: %d\n", a, fatorial(a));

    printf("\nPrograma finalizado com sucesso.\n");
    return 0;
}
