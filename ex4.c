/*Faça um programa que receba um inteiro e mostre seus divisores. Ex: 12 é divisível por 12, 6, 4, 3, 2 e por 1*/

#include <stdio.h>

int main() {
    int num, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("Divisores de %d sao: ", num);
    for(i = 1; i <= num; i++) {
        if(num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}