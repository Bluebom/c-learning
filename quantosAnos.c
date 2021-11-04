#include <stdio.h>

int main(void){
    int anoNasc, anoHoje, anoDepois = 2030;
    int idadeHoje, idadeDepois;

    printf("Ano de nascimento: ");
    scanf("%d", &anoNasc);

    printf("Ano atual: ");
    scanf("%d", &anoHoje);

    idadeHoje = anoHoje - anoNasc;
    idadeDepois = anoDepois - anoNasc;

    printf("Idade hoje: %d e idade depois: %d",idadeHoje, idadeDepois);
}
