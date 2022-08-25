#include <stdio.h>

int main() {

    double nota1, nota2;

    scanf("%lf", &nota1);
    scanf("%lf", &nota2);

    printf("MEDIA = %.5lf\n", ((nota1*3.5+nota2*7.5)/11));

    return 0;
}
