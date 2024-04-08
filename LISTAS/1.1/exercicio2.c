#include <stdio.h>
#include <conio.h>

main(){
	
	float n1,n2;
	
	printf("digite o primeiro numero: ");
	scanf("%f",&n1);
	printf("digite o segundo numero: ");
	scanf("%f",&n2);
	
	if(n1>n2){
		
		printf("%2.2f e maior que  %2.2f",n1,n2);
	}else if(n2>n1){
		printf("%2.2f e maior que %2.2f",n2,n1);
	}else{
		printf("Numero iguais");
	}	
	
}
