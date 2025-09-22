/*Faça um programa que calcule o produto de dois números através de somas sucessivas.*/

#include <stdio.h>
int main(){
    int i=0;
    float a, b, produto = 0;
    printf("\nDigite o primeiro numero: ");
    scanf("%f", &a);
    printf("\nDigite o segundo numero: ");
    scanf("%f", &b);
    for(i=0; i<b; i++){
        produto = produto + a;
    }
    printf("\nO resultado eh: %.2f", produto);

}