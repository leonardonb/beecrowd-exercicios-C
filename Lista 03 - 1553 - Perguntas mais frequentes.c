#include <stdio.h>

/*
K - Frequência para ser considerada uma pergunta frequente
N - Numeros de perguntas realizadas
P - Perguntas realizadas
*/

int main(){

    int N, K, P, i;
    int pergadc=0;
    int num[101]={0};

    scanf("%d%d", &N, &K);

    while(N!=0 && K!=0){
        for(i=0; i<101; i=i+1){
            num[i]=0;
        }

        pergadc=0;

        for(i=0; i<N; i=i+1){
            scanf("%d", &P);
            num[P]+=1;
        }

        for(i=0; i<101; i=i+1){
            if(num[i]>=K){
                pergadc=pergadc+1;
            }
        }

        printf("%d\n", pergadc);
        scanf("%d %d", &N, &K);
    }

    return 0;
}
