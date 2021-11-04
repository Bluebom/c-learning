#include<stdio.h>

int gerarSenha(){
    char frase[40] = "";
    int i, cont = 0;
    printf("\n Digite uma frase para gerar sua senha: ");
    fflush(stdin);
    fgets(frase, 40, stdin);
    for(i=0; i < 40 ; i++){
        if(frase[i] == 'a' || frase[i] == 'b'){
            cont++;
        }
    }
    srand(cont); //passando uma "semente" para a geração aleatóra
    return rand() * rand();
}

void main(){
    int senha;
    senha = gerarSenha();
    printf("Sua senha e = %d", senha);
}
