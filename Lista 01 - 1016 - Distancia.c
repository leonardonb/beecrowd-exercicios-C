#include <stdio.h>

int main() {

    int valorkm;

    scanf("%d", &valorkm);

    /* Se o carro anda 1Km em 2 minutos � necess�rio apenas fazer uma regra de tr�s entre a rela��o tempo e dist�ncia. Mas tamb�m daria certo
    calcular a rela��o considerando a dist�ncia que ele percorre em uma hora (60 minutos) */

    printf("%d minutos\n", valorkm*2);

    return 0;
}
