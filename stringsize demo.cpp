#include <string.h>
#include <stdio.h>
main(){

	char nombre[20];
	int tamano;

printf("Escriba su nombre:\n");
scanf("%s", nombre);

	tamano = strlen(nombre);
	//	   = sizeof(nombre);
	
	printf("Su nombre, %s, mide %d caracteres", nombre, tamano);
}

