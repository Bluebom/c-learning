#include<stdio.h>;
#include<stdlib.h>;
#include<locale.h>;

int main(void) {

    setlocale(LC_ALL, "portuguese");

    int i = 0, arr[10], soma = 0, media = 0, acima80=0, acim50=0, acim0=0;

    for(i = 0; i < 10; i++){
        printf("Digite um número: ");
        scanf("%d", &arr[i]);
    }

    for(i= 0; i < 10; i++){
        if(arr[i] > 80){
            acima80++;
        } else if(arr[i] >=  50){
            acim50++;
        } else if (arr[i] < 50) {
            acim0++;
        }
        soma += arr[i];
    }
    printf("Na faixa de preços acima de 80 temos %d items, abaixo de 80 e acima de 50 temos %d \nitems e por fim abaixo de 50 temos %d items\n", acima80, acim50, acim0);
    media = soma / 10;
    printf("A media dos preços dos produtos é: %d\n", media);

}
