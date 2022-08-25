#include <stdio.h>
#include <stdlib.h>

int main(){

    int resposta=0;
    float nota1, nota2;

    while(resposta!=2){ //apanhei horrores porque não tava dando certo com o =1
        scanf("%f", &nota1);
        while(nota1<0 || nota1>10){
            printf("nota invalida\n");
            scanf("%f", &nota1);
        }
        scanf("%f", &nota2);
        while(nota2<0 || nota2>10){
            printf("nota invalida\n");
            scanf("%f", &nota2);
        }
        printf("media = %.2f\n", (nota1+nota2)/2);
        do{
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &resposta);
        } while(resposta<1 || resposta>2);

    }

    return 0;
}
