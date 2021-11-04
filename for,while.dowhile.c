#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void)
{
    setlocale (LC_ALL,"Portuguese");

    int notaA, notaB, media;
    char query = 'S';


    while(query == 'S'){
        printf("Nota 1: ");
        scanf(" %d", &notaA);
        printf("Nota 2: ");
        scanf(" %d", &notaB);
        media = (notaA + notaB) / 2;
        printf("Sua média foi: %d \n", media);
        printf("Ainda quer continuar? Sim ou Não? ");
        scanf(" %c", &query);
    }

    do{
        printf("Nota 1: ");
        scanf(" %d", &notaA);
        printf("Nota 2: ");
        scanf(" %d", &notaB);
        media = (notaA + notaB) / 2;
        printf("Sua média foi: %d \n", media);
        printf("Ainda quer continuar? Sim ou Não? ");
        scanf(" %c", &query);
    } while(query != 'N');

}
