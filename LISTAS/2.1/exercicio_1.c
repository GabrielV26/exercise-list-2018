#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main(){
	
	int n,x,tab;

	printf("Digite o numero: ");
	scanf("%d",&n);

	for(tab=1;tab<11;tab++){
		x=n*tab;
		printf("%d x %d = %d\n", n, tab, x);
	}
 getch();
}
