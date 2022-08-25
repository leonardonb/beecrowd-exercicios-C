#include <stdio.h>

int main() {

    int valorkm;

    scanf("%d", &valorkm);

    /* Se o carro anda 1Km em 2 minutos é necessário apenas fazer uma regra de três entre a relação tempo e distância. Mas também daria certo
    calcular a relação considerando a distância que ele percorre em uma hora (60 minutos) */

    printf("%d minutos\n", valorkm*2);

    return 0;
}
