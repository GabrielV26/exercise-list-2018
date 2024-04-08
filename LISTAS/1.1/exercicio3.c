#include <stdio.h>
#include <conio.h>
#include <string.h>
main(){
	
	char nome[45];
	char genero;
	int idade;
	float salariofixo,x;
	
	printf("Nome do funcionario: ");
	scanf("%s",&nome);
	printf("Entre com a idade: ");
	scanf("%d",&idade);
	printf("Entre com o salario fixo: ");
	scanf("%f",&salariofixo);
	printf("Genero: ");
	scanf("%s",&genero);
	
	switch(genero){
		
		case 'm' : 

		        if(idade>=30){
		        	x=salariofixo+100;
		        }else if(idade<30){
		        	x=salariofixo+50;
				}
				
				printf("Nome:%s \n",nome);
		        printf("Salario fixo mais abono: %2.2f",x);
		break;
		
		case 'f':
			   if(idade>=30){
			   	    x=salariofixo+200;
			   }else if(idade<30){
			   	    x=salariofixo+80;
			   }
			    
				printf("Nome:%s \n",nome);
		        printf("Salario fixo mais abono: %2.2f",x);
		
		default: printf("erro \n");        
			   
	}
	
}
