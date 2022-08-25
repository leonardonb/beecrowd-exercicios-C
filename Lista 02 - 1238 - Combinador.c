#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

    int casos, i, j, tamanho2, tamanho1;
    char texto1[51], texto2[51];

    scanf("%d", &casos);

    for (i=0; i<casos; i=i+1){
        scanf("%s%s", texto1, texto2);
        tamanho1=strlen(texto1);
        tamanho2=strlen(texto2);

        if (tamanho2>=tamanho1){
            for (j=0; j<tamanho2; j=j+1){
                if (j<tamanho1){
                    printf("%c", texto1[j]);
                }
                printf("%c", texto2[j]);
            }
        }
        else if (tamanho1>=tamanho2){
            for (j=0; j<tamanho1; j=j+1){
                printf("%c", texto1[j]);
                if (j<tamanho2){
                    printf("%c", texto2[j]);
                }
            }
         }

        printf("\n");

    }
    return 0;
}
