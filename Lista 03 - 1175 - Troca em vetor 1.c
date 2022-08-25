#include <stdio.h>

int main(){

   int n[20], t, i, j;

   for(i=0; i<20; i++){
        scanf("%d",&n[i]);
        }

    for(i=0, j=19; i<10; i++, j--){
        t=n[i];
        n[i]=n[j];
        n[j]=t;
    }

    for(i=0; i<20; i++){
        printf("N[%d] = %d\n",i,n[i]);
    }

    return 0;
}
