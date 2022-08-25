#include <stdio.h>

int main() {

    int idadedias, anos, meses, dias;

    scanf("%d", &idadedias);

    anos=idadedias/365;
    meses=(idadedias%365)/30;
    dias=(idadedias%365)%30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}
