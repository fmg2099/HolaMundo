#include <stdio.h> //biblioteca de C
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
	//crea un apuntador de chars
	char* palabra;
	//pide 64 bytes de memoria
	palabra = (char*)malloc(64);
	//limpiar el contenido del apuntador
	memset(palabra, 0, 64);

	strcpy_s(palabra, 64, "hola mundo hoy es martes");

	palabra[15] = 0;

	for (int i = 0; i < 64; i++)
	{
		printf("%i : %i  (%c) \n ", i, palabra[i], palabra[i]);
	}

	printf( palabra  );
	return 0;
}
