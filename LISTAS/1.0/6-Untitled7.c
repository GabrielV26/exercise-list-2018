#include <stdio.h>
#include <conio.h>
//O restaurante a quilo Bem-B�o cobra R$12,00 por cada quilo de refei��o. Escreva um algoritmo que leia o peso da
//refei��o do cliente (em quilos) e imprima o valor a pagar. Assuma que a balan�a j� desconte o peso do prato.
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
