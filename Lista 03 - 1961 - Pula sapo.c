#include <stdio.h>

int main(){

    int i, P, N, posatual;
    int prox[101];

    scanf("%d %d", &P, &N); // P - Altura do pulo e N - Número de canos

    for(i=0; i<N; i++){
        scanf("%d", &prox[i]);
    }

        posatual=prox[0];
        i=0;

    while(((posatual+P)>=prox[i] && prox[i]>=posatual)|| ((posatual-P)<=prox[i] && prox[i]<=posatual)){
        posatual=prox[i];
         i++;
        if(i==N){
            printf("YOU WIN\n");
            return 0;
        }
    }
    printf("GAME OVER\n");
    return 0;
}
