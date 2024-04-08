#include <stdio.h>

main(){
	int idade,np,np18;

	np=0;
	np18=0;

	while(np<10){
		printf("Digite as idades: ", np+1);
		scanf("%d", &idade);

		np=np+1;

		if(idade>=18){
			np18=np18+1;
		}
	}
	
	printf(" %d pessoas com 18 anos ou mais\n", np18);

}
