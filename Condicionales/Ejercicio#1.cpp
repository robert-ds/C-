/* Comprobar a través de un programa si un alumno aprobó o no un examen (Aprueba si su nota es mayor a 10.5) */
#include <iostream>

int main()
{
	float nota;
	
	std::cout << "Digite la nota que obtuvo en el examen: ";
	std::cin >> nota;
	
	if(nota >= 10.5)
	{
		std::cout << "\n.::::FELICIDADES USTED APROBO EL EXAMEN!::::.\n";
	}else
	{
		std::cout << "\n.::::LO SIENTO USTED NO APROBO EL EXAMEN::::.\n";
	}
	
	return 0;
}
