#include <stdio.h>

int main(){

	int valor, i, j, n, primo=0;


	scanf("%d", &n);

	for(i=1; i<=n; i++){
		scanf("%d", &valor);
		primo = 0;

	for(j=2; j<valor; j++){
		if (valor%j==0){
			primo=1;
			}
		}

	if(primo==1){
		printf("%d nao eh primo\n", valor);
	}
		else {
		printf("%d eh primo\n", valor);
	}
}
	return 0;
}
