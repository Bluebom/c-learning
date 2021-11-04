#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void)
{
    setlocale(LC_ALL, "portuguese");

    int A, B, C;

    printf("Digite um número: ");
    scanf("%d", &A);

    
    printf("Digite um número: ");
    scanf("%d", &B);

    
    printf("Digite um número: ");
    scanf("%d", &C);

    printf("Você digitou: %d %d %d", A, B, C);
}
