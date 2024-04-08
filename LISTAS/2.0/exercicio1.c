#include<stdio.h>
#include<conio.h>

main(){
	
	int nota;
	
	printf("Entre com a nota do aluno: ");
	scanf("%d",&nota);
	
	if(nota<=2.9){
		printf("Conceito: E");
	}else if(nota==3.0 && nota <=4.9){
		printf("Conceito: D");
	}else if(nota==5.0 && nota <=6.9){
		printf("Conceito: C");
	}else if(nota==7.0 && nota <=8.9){
		printf("Conceito: B");
	}else{
		printf("Conceito: A");
	}
	
	getch();
}
