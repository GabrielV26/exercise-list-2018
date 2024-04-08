#include <stdio.h>
#include <conio.h>
//O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição. Escreva um algoritmo que leia o peso da
//refeição do cliente (em quilos) e imprima o valor a pagar. Assuma que a balança já desconte o peso do prato.
#define qlr 12.00
main(){
	
	float peso,prato,x;
	
	prato = 2;
	
	printf("Peso do prato: ");
	scanf("%f",&peso);
	
	x = peso*qlr-(prato*qlr);
	 
	printf("Valor Total: %f \n",x);
	
	getch();
	
}
