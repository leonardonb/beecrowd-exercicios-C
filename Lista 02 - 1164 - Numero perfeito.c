#include<stdio.h>

int main(){

    int valor,qnt,i,j,soma;

    scanf("%d",&qnt);

    for(i=0; i<qnt; i++){ // vai efetuar a repeti��o informada
        soma=0;
        scanf("%d",&valor);

        for(j=1; j<valor; j++){

            if(valor%j==0){ //vai analisar os divis�veis e somar quando a divis�o for igual a zero
               soma+=j;
            }
        }
            if (soma==valor){ //se a soma for igual ao valor, atende a condi��o.
                printf("%d eh perfeito\n",valor);
        }
        else{ //se a soma n�o for igual ao valor, n�o atende a condi��o.

        printf("%d nao eh perfeito\n",valor);
        }
    }
    return 0;
}
