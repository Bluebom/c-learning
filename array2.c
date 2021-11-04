#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int i, a[5], maior, menor, iMenor, iMaior;

    for(i = 0; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%d", &a[i]);
        if(i == 0 ){
            maior = a[i];
            menor = a[i];
            iMaior = i;
            iMenor = i;
        } else if(a[i] > maior){
            maior = a[i];
            iMaior = i;
        } else if(menor > a[i]){
            menor = a[i];
            iMenor = i;
        }
    }
    printf("O indice do maior e seu valor sao: %d => %d \n", iMaior, maior);
    printf("O indice do menor e seu valor sao: %d => %d \n", iMenor, menor);
}
