/* Determinar si un numero es par o impar */
#include <iostream>

int main()
{
	int n;
	int div;
	
	std::cout << "Digite un numero para saber si es par o impar: ";
	std::cin >> n;
	div = n % 2;
	
	
	if( div == 0 )
	{
		std::cout << "\n       :::El numero que ingreso es par:::\n";
	}
	else
	{
		std::cout << "\n       :::El numero que ingreso es impar:::\n";
	}
	
	return 0;
}
