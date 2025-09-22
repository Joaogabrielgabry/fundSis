/*Faça um programa que leia 11 números e mostre quantos são pares e quantos são ímpares.*/

#include <stdio.h>

int main() {
    int numero, i, pares = 0, impares = 0;

    for (i = 0; i < 11; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    return 0;
}