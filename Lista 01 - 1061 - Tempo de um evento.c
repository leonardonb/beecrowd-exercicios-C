#include <stdio.h>

int main(){

    int diainicio, diafim, dia, horainicio, horafim, hora, minutoinicio, minutofim, minuto, segundoinicio, segundofim, segundo;


    scanf("%*s %d", &diainicio);
    scanf("%d %*s %d %*s %d", &horainicio, &minutoinicio, &segundoinicio);
    scanf("%*s %d", &diafim);
    scanf("%d %*s %d %*s %d", &horafim, &minutofim, &segundofim);

    segundo = segundofim - segundoinicio;
    minuto = minutofim - minutoinicio;
    hora = horafim - horainicio;
    dia = diafim - diainicio;


if (segundo < 0){
 segundo += 60;
 minuto--;
 }

 if (minuto < 0){
 minuto += 60;
 hora--;
 }

if (hora < 0){
 hora += 24;
 dia--;
 }

 printf("%d dia(s)\n", dia);
 printf("%d hora(s)\n", hora);
 printf("%d minuto(s)\n", minuto);
 printf("%d segundo(s)\n", segundo);

 return 0;
}
