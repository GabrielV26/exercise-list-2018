#include<stdio.h>
#include<conio.h>

//A padaria Hotp�o vende uma certa quantidade de p�es franceses e uma quantidade de broas a cada dia. Cada
//p�ozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou com a venda dos
//p�es e broas (juntos), e quanto deve guardar numa conta de poupan�a (10% do total arrecadado). Voc� foi contratado
//para fazer os c�lculos para o dono. Com base nestes fatos, fa�a um algoritmo para ler as quantidades de p�es e de
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

