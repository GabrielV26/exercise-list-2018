#include<stdio.h>
#include<conio.h>

//Entrar com o dia e o mês de uma data e informar quantos dias se passaram desde o início do ano. Esqueça a questão
//dos anos bissextos e considere sempre que um mês possui 30 dias.

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
