#include <stdio.h>

int main(){

   int total, voto;
   int soma=0;


   while(scanf("%d", &total)==1){
        soma=0;
        for(int i=0; i<total; i=i+1){
                scanf("%d", &voto);
                if(voto==1)soma += 1;
        }
        if(soma<(double)total*(2.0/3.0)){
                printf("acusacao arquivada\n");
        } else{
                printf("impeachment\n");
        }
    }

    return 0;
}
