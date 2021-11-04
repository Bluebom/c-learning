#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void)
{
    int i = 1;

    while( i < 1000000)
    {
            i++;
            if(i%11 == 0 && i%13 == 0 && i%17 == 0)
            {
                printf(" %d \n", i);
                break;
            };
    }
}
