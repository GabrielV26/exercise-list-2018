#include <stdio.h>
#include <conio.h>

main(){
	
	char genero;
	int idade;
	float h,pi;
    
	printf("Informe o genero M ou F:");
	scanf("%c",&genero);
	
	switch(genero){
		
		case 'm': 
                	printf("informe a idade");
					scanf("%d",&idade);
					printf("Informe o altura");
					scanf("%f",&h);
               
			   	    if(h>1.70 && idade <=20){
		        	pi=(72.7*h)-58;
		        	printf("Peso ideal:%f",pi);
				}else if(h>1.70&&idade>=20 && 39){
                    pi=(72.7*h)-53;
                    printf("Peso ideal:%f",pi);
				}else if(h>1.70&&idade>=40){
					pi=(72.7*h)-45;
					printf("peso ideal:%f",pi);
				}else if(h<=1.70&&idade<=40){
					pi=(72.7*h)-50;
					printf("peso ideal:%f",pi);
				}else if(h<=1.70&&idade>40){
					pi=(72.7*h)-58;
					printf("peso ideal:%f",pi);
				}
		break;
		case'f':
			       printf("informe a idade");
			       scanf("%d",&idade);
			       printf("Informe a altura");
			       scanf("%d",&h);
			       
			       if(h>1.50){
			       	pi=(62.1*h)-44.7;
			       	printf("Peso ideal:%f",pi);
				   }else if(h<=1.50 && idade>=35){
				   	pi=(62.1*h)-45;
				   	printf("Peso ideal:%f",pi);
				   }else if(h<=1.50&&idade<35){
				   	pi=(62.1*h)-49;
				   	printf("Peso ideal:%f",pi);
				   }
		break;
		default: printf("Caps Lock ligado ou letra invalida");
}
getch();
}
