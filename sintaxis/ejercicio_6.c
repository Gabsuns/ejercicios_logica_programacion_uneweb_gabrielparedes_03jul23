#include <stdio.h>

int main() {
  // ejemplos de otras secuencias de escape validas:

 
  printf("\tHola mundo\n\n");
  /*
   la secuencia de escape "\t"Crea una tabulacion
  */
  printf("estoy aprendiendo \\ legunaje C.");
  /*
  la secuencia de escape "//" crea una barra invertida (\)
  */
  printf("Y es \"asombroso\".");  // esto imprime comillas dobles

  /*
   la secuencia de escape \" insertra un caracter de comillas dobles.
  */
 /*
 tambien puedo comentar partes del codigo.
 printf("cometi un error");
 */
  return 0;
  /*
    ¿que es \n exactamente?

    el caracter de nueva linea (\n) se denomina secuencia de escape y obliga al cursor a cambiar su posicion al comienzo de la siguiente linea en la pantalla. Esto da como resultado una nueva linea.
  */
}

//este es un comentario de una linea

/*
y este es un comentario multilinea
*/

printf("cometi un error");