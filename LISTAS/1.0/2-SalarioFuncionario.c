#include <stdio.h>
#include <conio.h>

main(){
	
	float v,p,x;
	
	printf("Entre com o valor do salario: ");
	scanf("%f",&v);
	printf("Entre com o percentual de aumento: ");
	scanf("%f",&p);
	
	x =v+(v*(p/100));
	
	printf("Resultado de aumento + salario:%2.2f",x);
	
	getch();
}
