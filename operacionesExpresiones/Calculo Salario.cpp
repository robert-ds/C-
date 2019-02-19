/* Dadas las horas trabajadas por una persona y el valor por hora. Calcular su Salario e Imprimirlo */
#include <iostream>

int main()
{
	float v;
	int h;
	float salario;
		
	std::cout << "Digite el valor $ por hora de su trabajo: ";
	std::cin >> v;
	std::cout << "Digite la cantidad de horas que tabaja: ";
	std::cin >> h;
	
	salario = v * h;
	
	std::cout << "Su Salario es: ";
	std::cout << salario <<"$";
	
	return 0;	
}
