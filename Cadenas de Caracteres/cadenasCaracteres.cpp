// Cadenas de Caracteres
#include <iostream>
#include <conio.h>
#include <string.h>

int main()
{
	char p[] = "Robert";
	char s[] = {'R','o','b','e','r','t'};
	char name[20];
	
	std::cout << "Digite su nombre: ";
	std::cin.getline(name,20,'\n');
	//gets(name);
	
	std::cout << name;  

	getch();
	return 0;
}
