#include <iostream>

int main()
{
	int numero;
	
	std::cout << "Digite un Número entre 1-5: ";
	std::cin >> numero;
	
	switch(numero){
		case 1: 
			std::cout << "\nEs el numero 1";
			break;
		
		case 2:
			std::cout << "\nEsel numero 2";
			break;
		
		case 3:
			std::cout << "\nEs el numero 3";
			break;
		
		case 4:
			std::cout << "\nEs el numero 4";
			break;
		
		case 5:
			std::cout << "\nEs el numero 5";
			break;	
		default:
			std::cout << "No esta en el rango de 1-5";
			break;	
					
	}
	return 0;
}
