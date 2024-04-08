#include <stdio.h>

 main(){
	//Definindo as variáveis
	float altura,peso,imc;
	
	int idade,loop=1;	
      //variável para manter o loop;
	char controle; //variável de controle;

	while(loop==1){	//enquanto a variavel loop for igual a 1 esse loop será executado

		printf("Digite a sua idade: ");
		scanf("%d", &idade);

		if (idade<12 || idade>65){
			printf("Calculo disponivel para idades entre 12 e 65 anos");
		}
		else{
			printf("Digite o seu peso: ");
			scanf("%f", &peso);
			printf("Digite a sua altura : ");
			scanf("%f", &altura);

			imc=peso/(altura*altura);

			printf("Seu IMC �: %f ", imc);
			if (imc >= 40){	//se for maior igual a 40
				printf("  Obesidade Grau III morbida.\n");
			}
			else if (imc >= 35){	//se for menor que 40 e maior igual a 35
				printf("  Obesidade Grau II severa\n");
			}
			else if (imc >= 30){ //se for menor que 40 (e 35) e maior igual a 30
				printf(" Obesidade Grau I.\n");
			}
			else if (imc >= 25){ //analogamente maior igual a 25 e menor que 30
				printf(" Sobrepeso.\n");
			}
			else if (imc >= 18.5){ //entre 18.5 e 25[
				printf(" Saudavel.\n");
			}
			else { //caso seja menor que 18.5
				printf(" Magreza.\n");
			}


		}
		getchar(); //limpando o buffer
		printf("Deseja continuar à utilizar o programa (S/N): ");
		scanf("%c", &controle);

		if (controle!='S' && controle!='s') loop=0; //caso a pessoa nao queira usar mais ela digitara algo diferente de 'S' e portanto o programa sairá do loop
	}
	printf("Fim\n");
	return(0);
}
