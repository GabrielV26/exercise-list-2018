#include <stdio.h>

 main(){
	int x,n,tab;

	for(n=1;n<11;n++){
		printf("Tabuada do %d\n", n);
		for(tab=1;tab<11;tab++){
			x=n*tab;
			printf("%d x %d = %d\n", n, tab, x);
		}
		printf("\n");
	}

}
