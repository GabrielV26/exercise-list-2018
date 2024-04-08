#include<math.h>
#include<conio.h>
#include<stdio.h>

main(){
	
	int valor,raiz,potencia2,potencia3;
	
	printf("Entre com valor inteiro a ser calculado: ");
	scanf("%d",&valor);
	
	raiz = sqrt(valor);
	potencia2 = pow(valor,2);
	potencia3 = pow(valor,3);
	 
	printf("Raiz: %d \n",raiz);
	printf("Potencia 2:%d\n",potencia2);
	printf("Potencia 3:%d\n",potencia3);
	
	getch();
}
