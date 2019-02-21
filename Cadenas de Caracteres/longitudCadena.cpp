// Longitud de una cadena de Caracteres - Función strlen()

#include <iostream>
#include <conio.h>
#include <string.h>

int main()
{
	char name[] = "Robert";
	int l = 0;
	
	l = strlen(name);
	
	std::cout << l;
	
	getch();
	return 0;
}
