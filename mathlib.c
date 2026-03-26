#include "mathlib.h"

int somar(int a, int b) {
    return a + b;
}

int subtrair(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

float dividir(float a, float b) {
    if (b == 0) return 0.0f / 0.0f;
    return a / b;
}

int fatorial(int n) {
    if (n < 0) return -1;
    if (n <= 1) return 1;
    return n * fatorial(n - 1);
}
