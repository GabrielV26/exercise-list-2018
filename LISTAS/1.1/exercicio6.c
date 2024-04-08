#include <stdio.h>
#include <conio.h>

main(){
	
	char idade[3];
	
	printf("Entre com sua idade: ");
	scanf("%s",&idade[3]);
	
	if(idade[3] =='0'){
		printf("Crianca");
	}else if( idade[3] == '1'){
		printf("Adolescente");
	}else if(idade[3] == '2'){
		printf("Jovem");
	}else if(idade[3] == '3'){
		printf("Adulto");
	}else if(idade[3] == '4'){
		printf("Melhor idade");
	}else{
		printf("Aposentado");
	}
}
