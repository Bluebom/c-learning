#include<stdio.h>

int main(){
    int num1;

    printf("Digite um numero inteiro:\t");
    scanf("%d", &num1);

    if(num1 >= 10 && num1%5 == 0){
            printf("O numero: %d e maior que 10 e divisivel por 5!", num1);
        } else{
            printf("Esse número: %d e menor que 10 ou nao e divisivel por 5!", num1);
    }
}
