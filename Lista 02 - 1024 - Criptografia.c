#include <stdio.h>
#include <string.h>

int main(){

char nocode[1000],code[1000];
int i, j, tamstring, n, m, l, entradas;

scanf("%d",&entradas);
getchar(); /* N�o consegui fazer dar certo o c�digo sem usar essa fun��o: A fun��o getchar() retorna um valor, o caractere lido
              (mais precisamente, o c�digo inteiro ASCII correspondente ao caractere) */

    while(entradas--){
        gets(nocode); //fun��o para leitura de strings (pra mim isso foi uma nova funcionalidade, embora tenha lido muito que � bom n�o usar.
        tamstring = strlen(nocode);

            for(i=0;i<tamstring;i=i+1){
                if((nocode[i]>='A' && nocode[i]<='Z') || (nocode[i]>='a'&& nocode[i]<='z'))
                    nocode[i] = nocode[i] + 3;
            }

            n=0;

            for(j=tamstring-1;j>=0;j=j-1){
                code[n] = nocode[j];
                n=n+1;
            }

            code[n] = '\0';
            l = tamstring/2;

            for(i=l;i<tamstring;i=i+1){
                code[i] =  code[i] - 1;
            }

printf("%s\n",code);

    }

}
