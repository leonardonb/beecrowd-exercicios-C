#include <stdio.h>
#include <string.h>

int main()
{
    int i, L, j, a, r;
    char T;
    double vetor[12][12];
    double soma;

    soma=0;

    scanf("%d", &L);
    scanf(" %c", &T);


    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%lf", &vetor[i][j]);
        }
    }

        for(r=0; r<12; r++){
            soma=soma+vetor[L][r];
        }


    if(T=='M'){
    	printf("%.1lf\n", soma/12);
	}

	else{
		printf("%.1lf\n", soma);
	}

    return 0;
}
