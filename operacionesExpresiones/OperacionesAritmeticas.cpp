/* 1. Escriba un programa que lea de la entrada estandar dos números y muestre en la salida estandar su suma, resta, multi_
plicacion i division*/

#include <iostream>

int main()
{
	int n;
	std::cout << "Digite su primer numero: ";
	std::cin >> n;
	
	int m;
	std::cout << "Digite su segundo numero: ";
	std::cin >> m;
	
	int suma, resta, mult;
	suma = n + m;
	resta = n - m;
	mult = n * m;
	
	double divi;
	divi = n / m;
	
	std::cout << "La suma es :" << suma << "\n";
	std::cout << "La resta es :" << resta << "\n";
	std::cout << "La multiplicacion es :" << mult << "\n";
	std::cout << "La division es :" << divi;
	
	
	return 0;
}
