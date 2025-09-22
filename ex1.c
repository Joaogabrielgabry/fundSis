/*Faça um algorítimo para exibir todos os números de 1 até 99, sendo que os números formados por um número seguido
se seu sucessor, como “45, 56 , 67 e etc” não devem ser exibidos. Utilize o laço de repetição para resolver a questão.*/


#include <stdio.h>
int main(){
    int i=1, dezena, unidade;
    while(i<=99){
        dezena = i/10;
        unidade = i%10;
        if(unidade == dezena + 1){
        }else{
            printf("\n%d", i);
        }
        i++;
    }

}