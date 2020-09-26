#include <stdio.h>
int main () {
    char nombre[100];
	unsigned int edad;
	
    //printf("Hola Mundo\n");
    printf("Nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola buenas %s\n", nombre);
    printf("Edad: ");
    scanf("%u", &edad);
    printf("Vas a cumplir %u\n", edad +1);
    return 0;
}
