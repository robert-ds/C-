//Paso de Parametros de Tipo Estructura

#include <iostream>
#include <conio.h>


struct persona{
	char nombre[30];
	int edad;
	
}p1;



//Prototipos
void pedirDatos();
void mostrarDatos(persona);

int main(){
	pedirDatos();
	mostrarDatos(p1);
	
	
	getch();
	return 0;
}
void pedirDatos(){
	std::cout << "Digite su Nombre: ";
	std::cin.getline(p1.nombre,30),'\n';
	
	std::cout << "Digite su Edad: ";
	std::cin >> p1.edad;
}
void mostrarDatos(persona p){
	std::cout << "El Nombre es: " << p.nombre << "\n";
	std::cout << "La Edad es: " << p.edad;
		
}







