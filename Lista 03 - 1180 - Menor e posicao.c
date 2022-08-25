#include <stdio.h>

int main(){
    int tamvetor, i, menorvalor, posicao=0;

    scanf("%d", &tamvetor);

    int num[tamvetor];

    for(i=0; i<tamvetor; i++){
        scanf("%d", &num[i]);
    }

    menorvalor=num[0];

    for(i=0; i<tamvetor; i++){
        if(num[i]<menorvalor){
            menorvalor=num[i];
            posicao=i;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", menorvalor, posicao);

    return 0;
}
