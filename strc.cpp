#include <iostream>
#include <conio.h>

struct persona{
	char name[20];
	int age;
	char addres[40];
} persona1;

int main()
{
	std::cout << "Digite su nombre: ";
	std::cin >> persona1.name ;
	
	std::cout << "\nDigite su Edad: ";
	std::cin >> persona1.age;
	
	std::cout << "\nDigite su direccion: ";
	std::cin >> persona1.addres;
	
	//Imprime en Pantalla
	std::cout << persona1.name << " ";
	std::cout << persona1.age << " ";
	std::cout << persona1.addres;
	
	getch();
	return 0;
}
