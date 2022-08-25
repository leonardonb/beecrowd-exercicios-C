#include <stdio.h>
#include <math.h>

int main() {

    double salario;

    scanf("%lf", &salario);

    if (salario >= 0 && salario <= 2000.00){
        printf("Isento\n");
    }
        else if (salario > 2000.00 && salario <= 3000.00){
            printf("R$ %.2lf\n", ((salario-2000)*0.08));
        }
            else if (salario > 3000.00 && salario <= 4500.00){
                printf("R$ %.2lf\n", ((salario-3000)*0.18)+(1000*0.08));
            }
                else {
                    printf("R$ %.2lf\n", ((salario-4500)*0.28)+(1500*0.18)+(1000*0.08));
                }


     return 0;
}
