#include <stdio.h>
  int main() {
    
    int numero;

    printf("\nEntre com um número de 1 a 10:\n");
    int certo = scanf("%i", &numero);

    if(certo && numero > 0 && numero < 11) {
      for (int i=1; i<=10; i++){ 
      printf("\n");
      printf("%i x %i = %i\n", i, numero, i*numero);
        
      }
      printf("\nTábuada invertida de %i\n", numero);
      
      
      for (int i=10; i>=1; i--){
        printf("\n");
        printf(" %i x %i = %i\n", i, numero, i*numero);
      }
     /* printf("A tabuada de %i é: \n", numero);
      printf("1 x %i = %i\n", numero, 1 * numero);
      printf("2 x %i = %i\n", numero, 2 * numero);
      printf("3 x %i = %i\n", numero, 3 * numero);
      printf("4 x %i = %i\n", numero, 4 * numero);
      printf("5 x %i = %i\n", numero, 5 * numero);
      printf("6 x %i = %i\n", numero, 6 * numero);
      printf("7 x %i = %i\n", numero, 7 * numero);
      printf("8 x %i = %i\n", numero, 8 * numero);
      printf("9 x %i = %i\n", numero, 9 * numero);
      printf("10 x %i = %i\n", numero, 10 * numero);*/
    } else { 
     printf("Número inválido. Tente novamente. \n");
    }
    

    
    return 0; 
  }