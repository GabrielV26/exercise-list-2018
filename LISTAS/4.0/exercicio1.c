 #include <stdio.h>
 #include <conio.h>
 #include <stdlib.h>
 
main() {
   int vet[10], i;
   for (i=0; i<10; i++) {
      printf("Informe vet[%d]: ", i);
      scanf("%d", &vet[i]);
   }
   printf("Nao tem\t%d\t%d\n", vet[0], vet[1]);
   for (i=1; i<9; i++)
      printf("%d\t%d\t%d\n", vet[i-1], vet[i], vet[i+1]);
   printf("%d\t%d\tNao tem\n", vet[8], vet[9]);
   return 0;
} 
