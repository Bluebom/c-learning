#include<stdio.h>
#include<locale.h>

int main(void) {
    int i, numero, par=0, impar=0;

    setlocale(LC_ALL, "portuguese");
    for(i = 1; i <= 10; i++){
        printf("digite um numero: ");
        scanf("%d", &numero);
        if(numero%2 != 0){
            impar++;
        } else{
            par++;
        }
    }
    printf("Voc� digitou %d n�meros impares e %d n�meros pares", impar, par);
}
