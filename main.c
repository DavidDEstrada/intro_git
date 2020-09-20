#include <stdio.h>
int main () {
    char nombre[100];

    printf("Hola Mundo\n");
    printf("Nombre: ");
    scanf("%s", nombre);
    printf("Hola %s\n", nombre);
    return 0;
}