#include <stdio.h>
#include <string.h>

int main(){

    int i, j;
    char tipo;
    double vetor[12][12], soma;

    soma=0;

    scanf("%c", &tipo);


    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%lf", &vetor[i][j]);
        }
    }

 	for(i=0; i<12; i++){

        for( j=0; j<12; j++){
          if(j<i){
		    soma=soma+vetor[i][j];
		    }
        }
     }

    if(tipo=='M'){
    	printf("%.1lf\n", soma/66);
	} else{
		printf("%.1lf\n", soma);
	}

    return 0;
}
