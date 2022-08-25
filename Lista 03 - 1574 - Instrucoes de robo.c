#include <stdio.h>
#include <string.h>

int main(){

    int a, i, j, posicao, voltas, vezes, instrucao[101];
    char comando[50];

    scanf("%d", &voltas);

    for(j=0; j<voltas; j++){
        for(i=0; i<102; i++){
            instrucao[i]=0;
        }

        posicao=0;

        scanf("%d", &vezes);

        for(i=1; i<=vezes; i++){

            scanf(" %s", &comando);

            if(comando[0]=='S'){
                    scanf(" %*s %d", &a);
            }

            if(comando[0]=='L'){
                    instrucao[i]=1;
            }

            if(comando[0]=='R'){
                    instrucao[i]=2;
            }

            if(comando[0]=='S'){
                    instrucao[i]=instrucao[a];
            }

            if(instrucao[i]==1){
                posicao--;
            }

            if(instrucao[i]==2){
                    posicao++;
            }
        }
        printf("%d\n", posicao);

    }

    return 0;
}
