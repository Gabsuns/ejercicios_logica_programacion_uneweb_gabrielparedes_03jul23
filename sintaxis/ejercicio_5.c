#include <stdio.h>

int main() {
  // generacion de nuevas lineas

  /*
    consejo: dos caracteres de escape uno despues del otro creara una linea en blanco
  */
  printf("Hola mundo\n\n");
  printf("estoy aprendiendo legunaje C.");
  
  /*
   podemos utilizar tantas funciones "printf()"
   como queramos. cin embargo tenemos que tener en cuenta que no se va a insertar una nueva linea al final de la salida.
  */
  return 0;
  /*
    ¿que es \n exactamente?

    el caracter de nueva linea (\n) se denomina secuencia de escape y obliga al cursor a cambiar su posicion al comienzo de la siguiente linea en la pantalla. Esto da como resultado una nueva linea.
  */
}