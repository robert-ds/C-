/*Ejercicio 1: Comprobar si un n�mero es par o impar, y se�alar la posici�n de memoria donde se esta guardando el numero. Con Punteros. */

#include <iostream>
#include <conio.h>

int main(){
	int n, *dir_n;
	
	std::cout << "Digite un numero: ";std::cin >> n;
	
	dir_n = &n; //Posicion de memoria de n
	
	if(*dir_n % 2 == 0){
		std::cout << "El numero " << *dir_n << " es par";
		std::cout << " La Posici�n de memoria es: " << dir_n;
	}else{
		std::cout << "El numero " << *dir_n << " es impar";
		std::cout << " La direccion de memoria es: " << dir_n;
	}
	
	getch();
	return 0;
}
