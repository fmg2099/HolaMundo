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

	printf( palabra  );
	return 0;
}
