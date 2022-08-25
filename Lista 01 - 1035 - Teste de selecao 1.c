#include <stdio.h>
#include <math.h>

int main() {

    int A, B, C, D, somaab, somacd;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    somaab=A+B;
    somacd=C+D;

    if (B>C && D>A && somacd>somaab && somaab>=0 && somacd>=0 && A%2==0){
        printf("Valores aceitos\n");
    }
    else {
        printf("Valores nao aceitos\n");
    }

    return 0;
}
