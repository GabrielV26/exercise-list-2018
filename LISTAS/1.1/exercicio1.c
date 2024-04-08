#include<stdio.h>
#include<conio.h>

main(){
	
	float n1,n2,l1,l2,media;
	char aluno;
	
	printf("Qual o tipo de aluno E ou R?");
	scanf("%c",&aluno);
	
	switch(aluno){
		
		case 'r':
			printf("digite a primeira nota: ");
			scanf("%f",&n1);
			printf("digite a segunda nota: ");
			scanf("%f",&n2);
			printf("digite a nota da lista 1: ");
			scanf("%f",&l1);
			printf("digite a nota da lista 2: ");
			scanf("%f",&l2);
			
			media=(((n1+n2)/2)*0.7)+(((l1+l2)/2)*0.7);
			
			
			if(media>6){
				printf("sua nota foi %2.2f e o aluno foi Aprovado",media);
			}else{
				printf("sua nota foi %2.2f e o aluno foi Reprovado",media);
			}
			break;
		
		case 'e':
			printf("digite a primeira nota: ");
			scanf("%f",&n1);
			printf("digite a segunda nota: ");
			scanf("%f",&n2);
			
			media=(n1+n2)/2;
				if(media>6){
				printf("sua nota foi %2.2f e o aluno foi Aprovado",media);
			}else{
				printf("sua nota foi %2.2f e o aluno foi Reprovado",media);
			}
			break;
		default: printf("erro");	
	}
}

