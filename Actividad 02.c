/*Estrada Velazquez David Oswaldo
  09/09/2020
  El programa:
  1. Captura cinco números enteros en un arreglo y muestra en pantalla 
     los números capturados, la suma total y el promedio.
  2. Implementa la función:
     void mostrar(int n, char arreglo[]) {
    	// Mostrar en pantalla n veces **arreglo
     }
  3. Contiene la estructura `Personaje` con los atributos: 
    - nombre
    - tipo
    - fuerza
    - salud
    En un arreglo que almacena hasta 5 Personajes.
*/
#include<stdlib.h>
#include<stdio.h>
#include "personaje.h"

void mostrar(int n, char cadena[]);

void capturar_enteros(){
	int i, suma=0,enteros[5];
	float promedio;
	printf("Digite los elementos del arreglo:\n");
	for(i=0;i<5;i++)
	{
		scanf("%i",&enteros[i]);
	}
	system("cls");
    for(i=0;i<5;i++)
	{
	printf("%i \n",enteros[i]);
	}
	for(i=0;i<5;i++)
	{
		suma= suma+enteros[i];
	}
	promedio=suma/5;
	printf("\n\nLa suma de los elementos es: %i y el promedio es: %.1f\n",suma,promedio);
	
}

void mostrar(int n, char cadena[]) {
	// Mostrar en pantalla n veces arreglo
	int i,j;

	for(i=0;i<n;i++)
		printf("%s \n",cadena);			

}

int main(){
	int cen=0,op,i;
	int n;
	char cadena[20];
	
	
	
	while(cen==0){
	printf("Actividad 02\n");
	printf("1. Capturar enteros\n2. Mostrar cadena\n3. Agregar personaje\n3. Mostrar personajes\nElija una opcion: ");
	scanf("%i",&op);
	system("cls");
	switch (op){
		case 1:
				capturar_enteros();
		break; 
		case 2:
				printf("Escribe una cadena de hasta 20 caracteres: ");
				fflush(stdin);
				fgets(cadena,sizeof(cadena),stdin);
				printf("n: ");
				scanf("%i",&n);
				mostrar(n,cadena);
		break;
		case 3:	
				capturar_personaje();
		break;
		case 4: 
				mostrar_personajes();
		break;
		default: printf("Fuera de rango");
	}
	printf("\nPresione 1 para elegir otra opcion o presione 2 para salir: ");scanf("%i",&op);
	if(op==2)cen=1;
	system("cls");
	}	
    }
    


