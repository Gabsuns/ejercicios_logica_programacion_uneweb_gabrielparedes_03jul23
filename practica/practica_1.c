#include <stdio.h>

int main() {
  /*
    int numero;
    int count = 0;
  */

  int numero, count =0;

  printf("digite un numero"); 
  scanf("%i", &numero);

  for(int i = 1; i <= numero; i++){
    if(numero % i == 0) {
        /*
        este codigo hace lo mismo que esta aqui abajo
    count = count +1;
    */
        count++;
    }
  }

  if (count> 2) {
    printf("el numero %i no es primo", numero);
  } else {
    printf("el numero %i es primo", numero);

  } 

  return 0;
}


