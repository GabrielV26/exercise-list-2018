#include<stdio.h>
#include<conio.h>

main(){
	
		int l1,l2,l3;
		
		printf("Digite a dimensao do primeiro lado");
		scanf("%d",&l1);
		printf("Digite a dimensao do segundo lado");
		scanf("%d",&l2);
		printf("Digite a dimesao do terceiro lado");
		scanf("%d",&l3);
		
		if(l1==l2 && l2==l3){
			printf("Triangulo equilatero");
		}else if(l1==l2 && l2!=l3){
			printf("Triangulo isoscele");
		}else if(l1!=l2 && l2!=l3){
			printf("Triangulo escaleno");
		}
		
		getch();
}
