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

void mostrar(int n, char arreglo[]);

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
int main(){
	int cen=0,op,i;
	int n;
	char cadena[20];
	
	struct personaje{
	char nombre[50];
	char tipo[50];
	int fuerza;
	int salud;
     }character[5];
	
	while(cen==0){
	printf("Actividad 02\n");
	printf("1. Elementos de un arreglo\n2. Funcion mostrar\n3. Estructura personaje\nElija una opcion: ");
	scanf("%i",&op);
	system("cls");
	switch (op){
		case 1:
				capturar_enteros();
		break; 
		case 2:
				printf("Cuantas veces quiere mostrar el arreglo?: ");
					scanf("%i",&n);
				mostrar(n,&arreglo[0]);
		break;
		case 3:		
				for(i=0; i<5; i++){
				printf("Captura de personajes\n\n\n");
				printf("Nombre del personaje %i: ",i+1);
    		     fflush(stdin);gets(character[i].nombre);
				printf("Tipo de personaje: ");
         		     fflush(stdin);gets(character[i].tipo);
				printf("Puntos de fuerza: ");
          			scanf("%i",&character[i].fuerza);
				printf("Puntos de salud: ");
          			scanf("%i",&character[i].salud);
				system("cls");
                                  }
				
				for(i=0; i<5; i++){
				printf("Lista de personajes\n\n\n");
				printf("Personaje #%i:\n\nNombre: ",i+1);
         		     puts(character[i].nombre);
				printf("Tipo de personaje: ");
         		     puts(character[i].tipo);
				printf("Puntos de fuerza: ");
          			printf("%i",character[i].fuerza);
				printf("\nPuntos de salud: ");
          			printf("%i\n\n",character[i].salud);
                                  }
			
		break;
		default: printf("Fuera de rango");
	}
	printf("\nPresione 1 para elegir otra opcion o presione 2 para salir: ");scanf("%i",&op);
	if(op==2)cen=1;
	system("cls");
	}	
    }
    
void mostrar(int n, char arreglo[]) {
	// Mostrar en pantalla n veces arreglo
	int i,j;

	for(i=0;i<n;i++){	
		for(j=0;j<7;j++){
					printf("%c ",arreglo[j]);	
						}
				
		printf("\n");
}
}

