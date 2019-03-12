#include <iostream>
#include <conio.h>

struct persona{
	char nombre[20];
	int edad;
	char direccion[30];  
}persona1 = {"Vasquez",28,"Calle las Flores"};

int main(){
	std::cout << "Su Nombre es: " << persona1.nombre << "\n";
	std::cout << "Su Edad es: " << persona1.edad << "\n";
	std::cout << "Su Direccion es: " << persona1.direccion;
	
	getch();
	return 0;
	
}
