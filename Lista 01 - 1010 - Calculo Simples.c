#include <stdio.h>

int main() {

    int codigopeca1, numerodepecas1, codigopeca2, numerodepecas2;
    double valorpeca1, valorpeca2;

    scanf("%d%d%lf", &codigopeca1,&numerodepecas1,&valorpeca1);
    scanf("%d%d%lf", &codigopeca2,&numerodepecas2,&valorpeca2);

    printf("VALOR A PAGAR: R$ %.2f\n",(numerodepecas1*valorpeca1)+(numerodepecas2*valorpeca2));

    return 0;
}
