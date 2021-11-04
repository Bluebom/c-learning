#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int media[2];
    char nome[20], nome2[20];

    printf("Media do Aluno: ");
    scanf(" %d", &media[0]);
    printf("Nome do Aluno: ");
    scanf(" %s", &nome);

    printf("Media do Aluno 2: ");
    scanf(" %d", &media[1]);
    printf("Nome do Aluno 2r: ");
    scanf(" %s", &nome2);

    if(media[0] > media[1]){
        printf("O aluno %s possui média maior que o aluno %s, sua média foi: ", nome, nome2, media[0]);
    } else if(media[1] > media[0]){
        printf("O aluno %s possui média maior que o aluno %s, sua média foi: ", nome2, nome, media[1]);
    }
}
