#include<stdio.h>

int main(){

    int valor,qnt,i,j,soma;

    scanf("%d",&qnt);

    for(i=0; i<qnt; i++){ // vai efetuar a repetição informada
        soma=0;
        scanf("%d",&valor);

        for(j=1; j<valor; j++){

            if(valor%j==0){ //vai analisar os divisíveis e somar quando a divisão for igual a zero
               soma+=j;
            }
        }
            if (soma==valor){ //se a soma for igual ao valor, atende a condição.
                printf("%d eh perfeito\n",valor);
        }
        else{ //se a soma não for igual ao valor, não atende a condição.

        printf("%d nao eh perfeito\n",valor);
        }
    }
    return 0;
}
