#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){

int vector[20],x,i,pos=-1;
 
   printf("Informe a lista de 20 valores: \n");
      for (i=0; i<20; i++){
      scanf("%d", &vector[i]); 
      printf(" posicao: %d \n",i);
      }
      
	  printf("informe um valor a procurar: \n");
      scanf("%d",&x);
      
      for(i=0; i<20 && pos == -1; i++){
          if(vector[i]==x){
          pos = i;
          }
      }
      
      if(pos == -1){
      printf("valor nao encontrado no vetor!\n");
      }else{

      printf("valor encontrado na posicao: %d\n", pos);
      }
    return 0;
} 

