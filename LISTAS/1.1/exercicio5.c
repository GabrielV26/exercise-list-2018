#include <stdio.h>
#include <conio.h>
#include <string.h>
main(){
	
	float salario,x;
	int codigo;
	
	printf("digite o salario do funcionario: ");
	scanf("%f",&salario);
	printf("entre com o codigo do funcionario: ");
	scanf("%d",&codigo);
	
	switch(codigo){
		case (101):
		         x=salario+(salario*0.05);
				 printf("Novo Salario: %2.2f",x);
		break;
		case (102):
		         x=salario+(salario*0.075);
				 printf("Novo Salario: %2.2f",x);
		break;		 
		case (103):
		         x=salario+(salario*0.10);
				 printf("Novo Salario: %2.2f",x);
		break;
		default : 
		         x=salario+(salario*0.15);
		         printf("Novo Salario: %2.2f",x);		 		 		  
	}
}
