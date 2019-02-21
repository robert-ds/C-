/* Comparar cadenas - Funcion strcmp() */

#include <iostream>
#include <conio.h>
#include <string.h>

int main()
{
	char name[] = "Avion";
	char lastname[] = "Botella";
	int n;
	
	n = strcmp(name,lastname);
	
	std::cout << n;
	
	
//	if(strcmp(name,lastname) == 0)
//	{
//		std::cout << "Las palabras son iguales";
//	 }else
//	 {
//	 	std::cout << "Las Palabras no son iguales";
//	 }
//	
	
	getch();
	return 0;
}
