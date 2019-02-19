/* Escribe un Programa que defina un vector de numeros y calcule la multiplicación de sus elementos */
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
	
	std::cout << "La multiplicación de su vector: " << mult;
	
	getch();
	return 0;
}
