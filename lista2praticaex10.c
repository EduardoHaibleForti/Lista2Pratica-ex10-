#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero, quadrado, num_digitos = 0, parte1, parte2, divisor, temp;
    srand(time(NULL));
    numero = rand() % 1000;
    printf("Numero gerado aleatoriamente: %d\n", numero);
    quadrado = numero * numero;
    printf("Quadrado do numero: %d\n", quadrado);
     temp = quadrado;
    while (temp > 0) {
        num_digitos++;
        temp /= 10;
    }
    divisor = 1;
    for (int i = 0; i < num_digitos / 2; i++) {
        divisor *= 10;
    }
    parte1 = quadrado / divisor;
    parte2 = quadrado % divisor;
    if (parte1 + parte2 == numero) {
        printf("O numero %d e um numero de Kaprekar!\n", numero);
    } else {
        printf("O numero %d nao e um numero de Kaprekar.\n", numero);
    }

    return 0;
}
