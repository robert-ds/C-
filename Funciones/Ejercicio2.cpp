/*Escriba una funcion llamada al_cuadrado() que calcule el cuadrado del valor que se le transmite y despliegue el 
resultado. La función debera ser capaz de elevar al cuadrado números flotantes */

#include <iostream>
#include <conio.h>

//Prototipo de la Función
void pedirDato();
void al_cuadrado(float valor);

float dato;

int main(){
	
	pedirDato();
	al_cuadrado(dato);
	
	getch();
	return 0;
}

void pedirDato(){
	std::cout << "Digite el Numero al Cual desea saber su cuadrado: ";
	std::cin >> dato;
}
void al_cuadrado(float valor){
	float r;
	r = valor * valor;
	
	std::cout << "El cuadrado del numero es: " << r;
}
