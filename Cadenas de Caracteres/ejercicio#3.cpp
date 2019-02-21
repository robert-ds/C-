/* Pedir al usuario que digite 2 cadenas de carecteres, e indicar si ambas cadenas son iguales, en caso de no serlo, indicar 
cual es mayor alfabeticamente.
 */
 
#include <iostream>
#include <conio.h>
#include <string.h>

int main()
{
	char cadena1[30]; 
	char cadena2[30];
	
	std::cout << "Digite una Cadena: ";
	std::cin.getline(cadena1,30,'\n');  
	
	std::cout << "Digite Otra Cadena: ";
	std::cin.getline(cadena2,30,'\n');  
	
	if(strcmp(cadena1,cadena2) == 0){
				
		std::cout << "Ambas cadenas son iguales";
		
	}elseif(strcmp(cadena1,cadena2) > 0)
	{
		std::cout << "La Cadena 1 es mayor que la cadena 2 " << cadena1 << " " << cadena2;
	}
	
	getch();
	return 0;
}
