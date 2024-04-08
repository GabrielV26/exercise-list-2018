#include <stdio.h>
#include <conio.h>

main(){
	
	char periodo;
	
	printf("Voce estudo no perido M-Matutino, V-Vesperino ou N-Noturno\n");
	scanf("%c",&periodo);
	
	if(periodo =='m' || periodo == 'M'){
		printf("Periodo= Matutino\n");
		printf("Boa aula!");
	}else if(periodo =='v'){
		printf("Periodo= Vesperino\n");
		printf("Boa aula!");
	}else if(periodo =='n'){
		printf("Periodo= Noturno\n");
		printf("Boa aula!");
	}else {
		printf("Opcao invalida");
	}
}
