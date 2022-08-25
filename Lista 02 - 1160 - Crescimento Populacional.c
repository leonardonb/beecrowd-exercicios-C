#include <stdio.h>
#include <stdlib.h>

int main(){

   int casos, pa, pb, i, anos;
   double g1, g2;

   scanf("%d", &casos);

   for(i=1; i<=casos; i=i+1){
       anos=0;
       scanf("%d""%d""%lf""%lf", &pa, &pb, &g1, &g2);

       while(pa<=pb){
           pa*=(g1/100.0)+1.0;
           pb*=(g2/100.0)+1.0;
           anos=anos+1;

           if (anos>100){
               printf("Mais de 1 seculo.\n");
               break;
           }
       }

       if (anos<=100){
        printf("%d anos.\n", anos);
       }
   }

   return 0;
}
