#include <stdio.h>
#include <conio.h>
//exe 3
main(){
	float n1,n2,n3,media;
	
	printf("entre com a nota 1: ");
	scanf("%f",&n1);
	printf("entre com a nota 2: ");
	scanf("%f",&n2);
	printf("entre com a nota 3: ");
	scanf("%f",&n3);
	
    media = (n1*1 + n2*2 + n3*3) / (1+2+3);

  printf("A media ponderada do aluno com as notas");
  printf("Media = %5.2f", media);
  
  getch();
}
