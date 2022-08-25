#include <stdio.h>

int main() {

    int A, B, C, maiorAB;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    maiorAB=(A+B+abs(A-B))/2;
    maiorAB=(C+maiorAB+abs(maiorAB-C))/2;

    printf("%d eh o maior\n",maiorAB);

/*   FAZIA MAIS SENTIDO E SERIA MAIS SIMPLES ASSIM:

        if (A>B && A>C) {
        printf("%d eh o maior\n", A);
    }
        if (B>A && B>C) {
        printf("%d eh o maior\n", B);
    }
            if (C>A && C>B) {
            printf("%d eh o maior\n", C);
    } */

    return 0;
}
