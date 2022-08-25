#include <stdio.h>
#include <math.h>

int n, valor1, valor2, i, somaimpar, maiorvalor, menorvalor;

int main (){

scanf("%d", &n);

for (i=0; i<n; i++){
    scanf("%d%d", &valor1, &valor2);
        if (valor1>valor2){
            maiorvalor=valor1;
            menorvalor=valor2;
        }
        else {
            maiorvalor=valor2;
            menorvalor=valor1;
        }
        somaimpar=0;

    for (menorvalor++; menorvalor<maiorvalor; menorvalor++){ //verificar impar e somar
        if (menorvalor%2!=0){
            somaimpar=somaimpar+menorvalor;
        }
    }

    printf("%d\n", somaimpar);
}
    return 0;
}
