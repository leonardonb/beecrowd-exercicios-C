#include <stdio.h>

int main() {

    int inicio, fim;

    scanf("%d", &inicio);
    scanf("%d", &fim);

   if (inicio>=fim) {
        printf("O JOGO DUROU %d HORA(S)\n", 24-inicio+fim);
    }
    else {
        printf("O JOGO DUROU %d HORA(S)\n", fim-inicio);
    }

    return 0;
}
