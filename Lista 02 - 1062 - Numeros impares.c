#include <stdio.h>
#include <math.h>

int valor, i;

int main (){


scanf("%d", &valor);

        for (i=0; i<=valor; i++){
            if(i%2!=0){
                printf("%d\n", i);
            }
        }

    return 0;
}
