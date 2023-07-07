//Hacer una función que diga si en una cadena hay sólo dígitos.

#include <stdio.h>

int main(void) {
  int p, num;
  printf("ingrese un numero:\n");
  p = scanf("%d", &num);
  
  while (!p){
    printf("ERROR: no es un numero. \n Por favor, ingrese un nuevo numero:\n");
    p = scanf("%d", &num);


if (p){
  printf("es un numero");
  else{
    printf("No es un numero, por favor ingrese un numero: ");
    scanf("%d" , &p);
  }
  return 0
  }