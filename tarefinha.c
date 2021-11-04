#include<stdio.h>

int main(void){
    int valor ,idade;


    printf("Ola Nadador!\nPode me informar a sua idade ?\ndigite '1' para sim e '0' para nao ");
    scanf("%d", &valor);

    if(valor == 1){
        printf("Otimo! Muito obrigado, pode dizer... ");
        scanf("%d", &idade);
        if(idade >= 5 && idade <= 7){
            printf("Nadador de idade %d e da categoria Infantil A", idade);
        } else if(8 <= idade && idade <= 10){
            printf("Nadador de idade %d e da categoria Infantil B", idade);
        } else if (11 <= idade && idade <= 13){
            printf("Nadador de idade %d e da categoria Juvenil A", idade);
        } else if (14 <= idade && idade <= 17){
            printf("Nadador de idade %d e da categoria Juvenil B", idade);
        } else if(idade >= 17){
            printf("Nadador de idade %d e da categoria Senior", idade);
        } else{
            printf("Nao existe categoria para crianças com menos de 5 anos");
        }

    } else if(valor == 0){
        printf("Que pena, mas tudo bem...");
    } else {
        printf("tente novamente!");
    }
}
