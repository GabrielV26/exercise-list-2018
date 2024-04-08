#include<stdio.h>
#include<conio.h>

main(){
	
	char periodo;
	
	printf("Voce estuda no periodo M-Matutino,V-Vesperino ou N-Noturno?\n");
	scanf("%c",&periodo);
	
	switch(periodo){
		case 'm': printf("Periodo= Matutino\n");
		           printf("Boa aula!");
		break;           
		case 'v' : printf("Periodo= Vesperino\n");
		           printf("Boa aula!");
		break;           
		case 'n' : printf("Periodo= Noturno\n");
		           printf("Boa aula!");
		break;
		default : printf("Opcao invalida");		   		             
	}
	
}
