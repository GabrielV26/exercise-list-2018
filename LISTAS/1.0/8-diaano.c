#include<stdio.h>
#include<conio.h>

//Entrar com o dia e o m�s de uma data e informar quantos dias se passaram desde o in�cio do ano. Esque�a a quest�o
//dos anos bissextos e considere sempre que um m�s possui 30 dias.

main(){
	
	int dia,mes,x;
	
	printf("Dia: ");
	scanf("%d",&dia);
	printf("Mes: ");
	scanf("%d",&mes);
	
	x= 365-dia*mes;
	
	printf("Passaram-se %d dias desde o inicio do ano",x);
	
	getch();
	
}
