/* Escribe un Programa que defina un vector de numeros y calcule la multiplicaci�n de sus elementos */
#include <iostream>
#include <conio.h>

int main()
{
	int n[] = {3,5,7};
	int mult = 1;
	
	for(int i = 0; i < 3; i++)
	{
		mult *= n[i];
	}
	
	std::cout << "La multiplicaci�n de su vector: " << mult;
	
	getch();
	return 0;
}
