#include<stdio.h>
float calcular(){
    float num;
    printf("Digite um numero: ");
    scanf("%f", &num);
    return num*num;
}

int main(){
    float resultado = 0;
    resultado = calcular();
    printf("A potência do numero digitado = %.2f", resultado);
    return 0;
}
