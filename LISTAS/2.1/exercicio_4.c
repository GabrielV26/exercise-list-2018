#include <stdio.h>

main(){
	int n,soma;

	n=10;
	soma=0;
	
	do{
		soma=soma+n;
		printf("Numero: %d\n", n);
		printf("Soma: %d\n\n", soma);
		n=n-1;
	}while(n>2);

	printf(" total = %d\n", soma);
}
