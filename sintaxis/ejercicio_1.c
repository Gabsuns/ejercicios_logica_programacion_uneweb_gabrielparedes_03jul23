#include <stdio.h>
/*
  #include <stdio.h> es una biblioteca de archivos de encabezado que nos permite trabajar con funciones de entrada y salida, como "printf()" (que se utiliza mas adelante). los archivos de encabezado agregan funcionalidad a los programas C.

  NOTA: No se preocupe si no entiende como #include <stdio.h> funciona. Piense en ello como algo que (casi) siempre aparece en los programas de lenguaje C.

  Una linea en blanco. C ignora los espacios en blanco pero lo usamos para hacer que el codgio sea mas legible
*/
int main() {
  /*Otra cosa que siempre aparece en un programa en C es "main()". esto se llama una funcion. {} se ejecutara cualquier codigo dentro de sus corchetes
  */
  printf("Hola mundo");
  /*
    "printf()" es una funcion utilizada para generar/imprimir texto en la pantalla en nuestro ejemplo, generara "Hola mundo".

    NOTA: tenga en cuenta que: cada declaracion C termina con punto y coma ";"

    el cuerpo de "int main()" tambien podria escribirse como: 
    "int main(){printf("Hola mundo");return 0;}"

    Recuerde: el compilador ignora los espacios en blanco. Sin embargo varias lineas hacen que el codigo sea mas legible
  */
  return 0;
  /*
    "return 0" finaliza la funcion "main()"
  */

 /*
 no olvide agregar el corchete de cierre "}"
 para finalizar la funcion principal
 */
}