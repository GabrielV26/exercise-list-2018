#include <stdio.h>

main(){
	//declarando as variáveis
	int vcand1=0,vcand2=0,vnulo=0,vbranco=0,vtotal=0,vescolhido,opinv;
	
	do{
		if(vtotal%5==0 && opinv%3==0){
			printf("Digite 1 para votar no conditado um.\n");
			printf("Digite 2 para votar no candidato dois.\n");
			printf("Digite 3 para votar nulo.\n");
			printf("Digite 4 para votar branco.\n");
			printf("Digite 0 para encerrar.\n");
		}

		printf("Digite a opcao escolhida: ");
		scanf("%d", &vescolhido);
		
		switch (vescolhido){
			case(1):
				vcand1++;
				vtotal++;
				opinv=0;
				printf("Voto computado com sucesso.\n\n");
				break;
			case(2):
				vcand2++;
				vtotal++;
				opinv=0;
				printf("Voto computado com sucesso.\n\n");
				break;
			case(3):
				vnulo++;
				vtotal++;
				opinv=0;
				printf("Voto computado com sucesso.\n\n");
				break;
			case(4):
				vbranco++;
				vtotal++;
				opinv=0;
				printf("Voto computado com sucesso.\n\n");
				break;
			case(0):
				opinv=0;
				break;
			default:
				printf("erro.\n");
				opinv++;	
				break;
		}
		
	}while(vescolhido!=0); //nesse caso o loop acontece enquanto o usuario nao escolher a opção 0 (Finaliza votação)	
	printf("votacao encerrada com sucesso.\n");
	if(vtotal!=0){	
		printf("Resultado da votacao: \n");
		printf("Votos candidato 1: %d votos (%2.2f %%)\n", vcand1, 100.0*vcand1/(vtotal));
		printf("Votos candidato 2: %d votos (%2.f %%)\n", vcand2, 100.0*vcand2/(vtotal));
		printf("Votos nulos: %d votos (%2.2f %%)\n", vnulo, 100.0*vnulo/(vtotal));
		printf("Votos brancos: %d votos (%2.2f %%)\n", vbranco, 100.0*vbranco/(vtotal));
	}
	else{
		printf("Encerrada sem nenhum voto.\n");
	}

	return(0);
}
