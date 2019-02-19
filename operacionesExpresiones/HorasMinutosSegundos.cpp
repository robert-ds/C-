/* Calcular la cantidad de segundo qque estan incluidos en el numero de horas, minutos y segundos ingresados por el usuario */
#include <iostream>

int main()
{
	int h;
	int m;
	int s;
	int resul;
	
	std::cout << "Digite la hora: "; std::cin >> h;
	
	std::cout << "\nDigite los minutos: "; std::cin >> m;
	
	std::cout << "\nDigite los Segundos: "; std::cin >> s;
	
	resul = (h * 3600) + (m * 60) + s;
	
	std::cout << "La Cantidad de Segundos de las horas y minutos ingresados son: "; std::cout << resul << "s";
	
	return 0;
}

