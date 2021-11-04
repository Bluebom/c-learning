#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
        setlocale(LC_ALL, "portuguese");
        int A[4][4], impares[4][4], L, C, cont;

        for(L = 0; L < 4; L++){
            for(C = 0; C < 4; C++){
                printf("preencha a celula (%d,%d) ", L, C);
                scanf("%d", &A[L][C]);
            }
        }

        for(L = 0; L < 4; L++){
            for(C = 0; C < 4; C++){
                if( A[L][C] % 2 != 0){
                    impares[L][C] = A[L][C];
                    printf(" na localizacao (%d,%d) o valor é %d \n", L, C, A[L][C]);
                }
            }
        }

}

