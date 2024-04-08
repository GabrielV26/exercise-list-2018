#include <stdio.h>

main(){

	//declarando as variaveis não-temporarias
	float salario,satotal,saminimo;
	int idade,idminima,idsaminimo,habitantes,idmaxima,opcao,sevalido,opvalida;
	char sexo,sesaminimo,nopesquisa;


	do{
		habitantes=0,satotal=0,idmaxima=0,idminima=-1,saminimo=-1,idsaminimo=0,sesaminimo=' ',opcao=1;

		while(opcao==1){
			printf("Escolha a opcao desejada: \n");
			printf("1 Para inserir um novo habitante.\n");
			printf("0 Para encerrar.\n");
			scanf("%d", &opcao);

			switch(opcao){
				case 1:
					printf("Entre com idade: ");
					scanf("%d", &idade);
					do{
						sevalido=0;
						printf("Digite o sexo: ");
						getchar();
						scanf("%c", &sexo);
						if(sexo=='M' || sexo=='m' || sexo=='F' || sexo=='f') sevalido=1;
						else printf("Erro Digite novamente\n");
					}while(sevalido==0);

					printf("Entre com salario: ");
					scanf("%f", &salario);

					//Fazendo as operações necessárias:
					satotal+=salario;
					habitantes++;

					if(idade>idmaxima) idmaxima=idade;
					if(idade<idminima || idminima==-1) idminima=idade;
					
					if(salario<saminimo || saminimo==-1){
						sesaminimo=sexo;
						idsaminimo=idade;
						saminimo=salario;
					}
					
					printf("\nMedia dos salarios: R$ %f\n", satotal/(float)(habitantes));
					printf("A menor e maior idade presente sao: %d e %d anos\n", idminima, idmaxima);
					printf("O salario menor pertence a uma pessoa do sexo %c, com %d anos e vale R$ %f\n\n", sesaminimo, idsaminimo, saminimo);
				case 0:
					break;
				default:
					opcao=1;
					printf("opcao invalida\n");
					break;
			}
		}
		if(habitantes>0){
			printf("\nMedia dos salarios: R$ %f\n", satotal/(float)(habitantes));
			printf("A menor e maior idade presente sao: %d e %d anos\n", idminima, idmaxima);
			printf("O salario menor pertence a uma pessoa do sexo %c, com %d anos e vale R$ %f\n", sesaminimo, idsaminimo, saminimo);
		}
		else printf("Pesquisa finalizada sem nenhum habitante\n");
		do{
			opvalida=0;
			printf("Fazer dinovo? (S) ou (N): ");
			getchar();
			scanf("%c", &nopesquisa);
			if(nopesquisa=='S' || nopesquisa=='s' || nopesquisa=='N' || nopesquisa=='n') opvalida=1;
			else printf("Opcao invalida\n");
		}while(opvalida==0);

	}while(nopesquisa=='S' || nopesquisa=='s');
	


	return(0);
}
