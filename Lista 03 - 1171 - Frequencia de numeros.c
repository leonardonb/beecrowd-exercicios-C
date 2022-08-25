#include <stdio.h>

int main(){

    int n, i, j, r;
    int qnt[2001];
    int num;

    scanf("%d",&n);

    for(i=0; i<2001; i++){
        qnt[i]=0;
    }

    for( j=0; j<n; j++){
        scanf("%d", &num);
        qnt[num]+= 1; //índice que armazena os números digitados
    }

    for(r=0; r<2001; r++){
        if(qnt[r]>0 ){
            printf("%d aparece %d vez(es)\n", r, qnt[r]);
        }
    }

    return 0;
}
