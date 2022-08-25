#include <stdio.h>

int main() {

    int funcionario, horas;
    float valorhora;

    scanf("%d", &funcionario);
    scanf("%d", &horas);
    scanf("%f", &valorhora);

    printf("NUMBER = %d\n", funcionario);
    printf("SALARY = U$ %.2f\n", horas*valorhora);

    return 0;
}
