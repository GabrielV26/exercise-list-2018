#include<stdio.h>
#include<conio.h>

//A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de broas a cada dia. Cada
//pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou com a venda dos
//pães e broas (juntos), e quanto deve guardar numa conta de poupança (10% do total arrecadado). Você foi contratado
//para fazer os cálculos para o dono. Com base nestes fatos, faça um algoritmo para ler as quantidades de pães e de
//broas, e depois calcular os dados solicitados.
#define vp 0.12
#define vb 1.50
main(){
	
	float p,b,y,total;
	
	printf("Quantidade de paes vendidos: ");
	scanf("%f",&p);
	printf("Quantidade de Broas vendidas: ");
	scanf("%f",&b);
	
	y = (p*vp)+(b*vb);
	printf("Valor de venda:%f\n",y);
	total = y*0.1;
	
	printf("Valor a depositar:%2.2f ",total);
	
	getch();
}

