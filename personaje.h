#ifndef PERSONAJE_H
#define PERSONAJE_H
#include<stdio.h>
struct personaje{
	char nombre[20];
	char tipo[20];
	float fuerza;
	int salud;
     }character[5];
     
 unsigned int cont = 0;   
  
void capturar_personaje(){
	if(cont<5){
			    printf("Captura de personajes\n\n\n");
				printf("Nombre del personaje %i: ",cont+1);
    		         fflush(stdin);gets(character[cont].nombre);
				printf("Tipo de personaje: ");
         		     fflush(stdin);gets(character[cont].tipo);
				printf("Puntos de fuerza: ");
          			scanf("%f",&character[cont].fuerza);
				printf("Puntos de salud: ");
          			scanf("%i",&character[cont].salud);
				cont++;
	}
	else{
		printf("Arreglo de personajes esta lleno");
	}			
                                
	
}


void mostrar_personajes(){
	int i;
	printf("Lista de personajes\n\n\n");
	for(i=0; i<cont; i++){
				
				printf("Personaje #%i:\n\nNombre: ",i+1);
         		     puts(character[i].nombre);
				printf("Tipo de personaje: ");
         		     puts(character[i].tipo);
				printf("Puntos de fuerza: ");
          			printf("%.2f",character[i].fuerza);
				printf("\nPuntos de salud: ");
          			printf("%i\n\n",character[i].salud);
                                  }
}

#endif
