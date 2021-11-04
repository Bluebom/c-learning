#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
    char conceito;

    setlocale(LC_ALL, "portuguese");
    printf("Digite seu conceito: ");
    scanf("%c", &conceito);

    if(conceito == 'A'){
        printf("EXCELENTE");
    } else if(conceito == 'B'){
        printf("OTIMO");
    } else if(conceito == 'C'){
        printf("REGULAR");
    } else if(conceito == 'D'){
        printf("RUIM");
    } else if (conceito == 'E'){
        printf("NOS VEMOS NO PROXIMO SEMESTRE");
    }
}
