/*Faça um programa que calcule e exiba o fatorial de um número digitado. Exiba no formato exemplificado abaixo: Ex:
5! = 5 x 4 x 3 x 2 x 1 = 120
*/

#include <stdio.h>

int main() {
    int num, fatorial = 1;

    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &num);

    printf("%d! = ", num);
    for (int i = num; i > 0; i--) {
        fatorial *= i;
        printf("%d", i);
        if (i > 1) {
            printf(" x ");
        }
    }
    printf(" = %d\n", fatorial);

    return 0;
}

