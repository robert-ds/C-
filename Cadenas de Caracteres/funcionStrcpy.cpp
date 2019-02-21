// Copiar el contenido de una cadena a otra - Función strcpy()

#include <iostream>
#include <conio.h>
#include <string.h>

int main()
{
	char name[] = "Robert";
	char name2[20];
	
	strcpy(name2,name);
	
	std::cout << name2;
	
	getch();
	return 0;
}
