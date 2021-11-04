#include<stdio.h>;
#include<stdlib.h>;
#include<locale.h>;


int main(void){
    setlocale(LC_ALL, "portuguese");

    int soma[4], matriz[4][4], lA, lB, i;

    for(lA = 0; lA < 4; lA++)
    {
        soma[lA] = 0;
        for(lB = 0; lB <  4; lB++){
            printf("Digite um valor para a celula (%d, %d): ", lA, lB);
            scanf("%d", &matriz[lA][lB]);
            soma[lA] += matriz[lA][lB];
        }
    }
    for(i = 0; i < 4; i++){
        printf("A soma da linha %d é %d\n", i, soma[i]);
    }
}
