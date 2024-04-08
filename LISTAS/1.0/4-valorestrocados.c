#include <stdio.h>
#include <conio.h>
//exe 4
main(){
	
	int vum,vdois,x;
	
	printf("Valor 1: ");
	scanf("%d",&vum);
	
	printf("Valor 2: ");
	scanf("%d",&vdois);
	
	x=vum;
	vum=vdois;
	vdois=x;
	
	printf("Valores trocados \n");
	printf("Valor 2 : %d \n",vdois);
	printf("Valor 1 : %d \n",vum);
	
	getch();
}
