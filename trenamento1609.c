#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
    int cod, qnt;
    float valor;

    setlocale(LC_ALL, "portuguese");

    printf("Diga-me o c�digo do produto: ");
    scanf(" %d", &cod);

    switch(cod){
    case 100:
        valor = 1.7;
        break;
    case 101:
        valor = 2.3;
        break;
    case 102:
        valor = 2.6;
        break;
    case 103:
        valor = 2.4;
        break;
    case 104:
        valor = 2.5;
        break;
    case 105:
        valor = 1.00;
        break;
    }

    printf("Quantos voc� vai querer ? ");
    scanf(" %d", &qnt);

    valor = (valor * qnt);
    printf("O total a pagar �: %.2f", valor);



}
