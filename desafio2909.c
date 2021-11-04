#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){

    setlocale(LC_ALL,"Portuguese");

    int voto = 0, cand1 = 0, cand2 = 0, cand3 = 0, nulo = 0, branco = 0, total = 0, porcentNulo = 0, porcentBranco = 0;
    char maior = 'A';

    do {
        printf("Escolha uma opção: \n");
        printf("1 para Candidato Jair Rodrigues \n");
        printf("2 para Candidato Carlos Luz \n");
        printf("3 para Candidato Neves Rocha \n");
        printf("4 para Nulo \n");
        printf("5 para Branco \n");
        printf("6 para ver como está a votação: \n");
        printf("7 para sair do laço ");
        scanf(" %d", &voto);

        switch(voto){
        case 1:
            cand1 += 1;
            break;
        case 2:
            cand2 += 1;
            break;
        case 3:
            cand3 += 1;
            break;
        case 4:
            nulo += 1;
            break;
        case 5:
            branco += 1;
            break;
        case 6:
            printf("#--------------------------------------------------------# \n");
            if(cand2 > cand1){
                maior = 'B';
                if(cand3 > cand2){
                    maior = 'C';
                };
            } else if (cand3 > cand1){
                maior = 'C';
                if(cand2 > cand3){
                    maior = 'B';
                }
            }

            printf("Jair Rodrigues com: %d \n", cand1);
            printf("Carlos Luz com: %d \n", cand2);
            printf("Neves Rocha com: %d \n", cand3);
            printf("Nulos com: %d \n", nulo);
            printf("Brancos com: %d \n", branco);
            if(total != 0){
                porcentNulo = nulo * 100 / total;
                porcentBranco = branco * 100 / total;
            }
            printf("Porcentagem dos votos nulos com: %d%% \n", porcentNulo);
            printf("Porcentagem dos votos brancos com: %d%% \n", porcentBranco);
            printf("Candidato vencedor até o momento: ");
            if(maior == 'C'){
                printf("Neves Rocha \n");
            } else if(maior == 'B'){
                printf("Carlos Luz \n");
            } else{
                printf("Jair Rodrigues \n");
            }
            printf("#--------------------------------------------------------# \n");
            break;
        }
            total++;

    } while(voto != 7);

}
