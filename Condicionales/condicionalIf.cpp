#include <iostream>

int main()
{
	int numero, dato = 5;
	
	std::cout << "Digite un numero: ";
	std::cin >> numero;
	
	if(numero == dato)
	{
		std::cout << "El numero es 5 ";
	}else
	{
		std::cout << "El Numero es Diferente de 5";
	}
	
	
	
	return 0;
}
