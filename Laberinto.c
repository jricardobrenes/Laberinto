#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "Casilla.h"
#include "Matriz.h"

/*
 * Instituto Tecnológico de Costa Rica
 * Escuela de Ingeniería en Computación
 * Lenguajes de Programación
 * Prof. Eddy Ramírez
 * Estudiantes: 
 *	José Ricardo Brenes Camacho(201236179)
 *	Melvin Sandoval Quiros(201240810)
 *
 */



int main(int argc, char* argv[])
{
  crearMatrizAletoria();
  /*int i,j,m,n;
  Casilla ** matriz;
  
  //struct Casilla nueva = {.paredes = 0000, .valor = 0};
  
  printf("Ingrese el numero de filas\n");
  scanf("%d",&m);
  printf("Ingrese el numero de columas\n");
  scanf("%d",&n);
  
  matriz = malloc(m*sizeof(Casilla*));

  int seed = time(NULL);
  srand(seed);
  
  for(i=0;i<m;i++)
    matriz[i] = malloc(n*sizeof(Casilla));
  
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      matriz[i][j].valor = (rand() % 100) + 1;
      //matriz[i][j].paredes = "1111";
      printf("%d\t",matriz[i][j].valor);*/
      /*matriz[i][j] = {.paredes = 1111,.valor= (rand() % 100) +1};
      printf("%d\t",matriz[i][j]->valor);
      /*matriz[i][j].valor = (rand() % 100) + 1;
      printf("%d\t",matriz[i][j].valor);*/
   /* }
    printf("\n");
  }
  printf("\n\n");*/
  
  
  return 0;
  
}
