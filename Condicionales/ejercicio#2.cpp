/* Comprobar si un numero digitado por el usuario es positivo o negativo */
#include <iostream>

int main()
{
	float n;
	
	std::cout << "Digite un numero y lo Comprobare: ";
	std::cin >> n;
	
	if( n > 0 )
	{
		std::cout << "\nEl numero que ingreso es positivo\n";
	}else
	{
		std::cout << "\nEl numero que ingreso es negativo\n";
	}
	
	return 0;
}
