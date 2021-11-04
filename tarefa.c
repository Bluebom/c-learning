#include<stdio.h>

int main (void){
int num1, num2, operacao;

printf("Digite um numero: ");
scanf("%d", &num1);


printf("Digite outro numero ");
scanf("%d", &num2);

printf("Digite 1 para escolher a operacao de adicao, 2 para subtracao ou 3 para divisao: ");
scanf("%d", &operacao);

switch (operacao)
{
    case 1:
        printf("A soma entre %d e %d e igual a %d", num1, num2, num1+num2);
        break;
    case 2:
        printf("A subtracao entre %d e %d e igual a %d", num1, num2, num1-num2);
        break;
    case 3:
        if(num2 == 0){
            break;
        }
        printf("A divisao entre %d e %d e igual a %d", num1, num2, num1/num2);
        break;
    default:
        printf("Opcao invalida");
        break;
}
}


