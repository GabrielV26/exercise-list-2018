#include <stdio.h>
#include <conio.h>

main(){
	
	float v,p,x;
	
	printf("Entre com o valor do produto: ");
	scanf("%f",&v);
	printf("Entre com o percentual: ");
	scanf("%f",&p);
	
	x =v+(v*(p/100));
	
	printf("Resultado de aumento:%2.2f",x);
	
	getch();
}
