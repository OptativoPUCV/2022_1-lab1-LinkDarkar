#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
//#include "exercises.h"

/* 
Ejercicio 1.
Función que recibe 3 parámetros (a, b y c), 
y en c almacena el valor de la suma de a más b.
*/

void suma(int a, int b, int * c)
{
   *c = a + b;
}

/*
Esta función suma los N primeros números del arreglo a
*/
int sumaN(int a[], int N)
{
   int i;
   int tot = 0;

   for(i = 0; i < N; i++)
   {
      tot += a[i];
   }

   return tot;
}

/*
Ejercicio 2.
Esta función debe sumar los últimos m números del 
arreglo a y almacena el resultado en *suma.
Utilice la función sumaN.
*/
//n = largo | m = ultimos a sumar | *suma = donde se almacena el resultado
void sumaNultimos(int a[], int n, int m, int * suma)
{
   int *listaUltimos = (int*) calloc(m , sizeof(int));
   if (listaUltimos == NULL)
   {
      exit(1);
   }

   int casilla = n - 1;

   for (int cont = 0 ; cont < m ; cont++)
   {
      listaUltimos[cont] = a[casilla];
      casilla -= 1;
   }

   *suma = sumaN(listaUltimos , m);
}

/*
Ejercicio 3.
Considerando la estructura Persona, programe la función
crearPersona(...), la cual crea una nueva persona con 
los datos correspondientes y retorna un puntero al dato 
recién creado.
*/
typedef struct
{
  char nombre[30];
  char rut[11];
  int edad;
} Persona;


Persona* crearPersona(char nombre[], char rut[], int edad)
{
   Persona *datos = (Persona *) malloc(sizeof(Persona));
   if (datos == NULL)
   {
      exit(1);
   }

   strcpy(datos->nombre , nombre);
   strcpy(datos->rut , rut);
   datos->edad = edad;
   return datos;
}

/*
Ejercicio 4.
Considerando la estructura "Vector", escriba 
la función Vector* crearVector(int n), la cual crea 
un vector con capacidad `n`, reserva la memoria 
correspondiente para el arreglo con `n` datos 
inicializados en 0 y luego retorna el vector creado.
*/
typedef struct
{
   int * datos; // arreglo dinámico
   int capacidad; // capacidad del arreglo
} Vector;

Vector * crearVector(int n)
{
   Vector *lista = (Vector *) calloc(n , sizeof(Vector));
   if (lista == NULL)
   {
      exit(1);
   }

   return lista;
}

// ./test.sh

/*
Ejercicio 5a.
Programe la función void asignarValor(Vector * v, int i, int valor), 
la cual asigna el valor a la posición i del vector v.
*/
void asignarValor(Vector * v, int i, int valor)
{

}

/*
Ejercicio 6.
Programe la función int obtenerValor(Vector * v, int i), 
la cual retorna el valor en la posición i del vector v.
*/
int obtenerValor(Vector * v, int i)
{
   return 0;
}

/*
Ejercicio 7.
Función que suma los vectores `a` y `b` y 
actualiza el vector `c` con el resultado de la suma.
*/
void sumaV(Vector * a, Vector * b, Vector * c)
{

}

/*
Ejercicio 8.
Use las operaciones implementadas de vectores para 
sumar (a1,a2)+(b1+b2). Almacene el resultado en el vector c.
*/
void sumaV2(int a1, int a2, int b1, int b2, Vector *c)
{

}
