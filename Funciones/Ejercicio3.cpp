/* Ejercicio 3: Escriba una Funcion nombrada funpot() que eleve un numero entero que se le transmita a una potencia
en numero entero positivo y desplieque el resultado. El numero entero positivo debera ser el segundo valor transmitido
a la funcion */

#include <iostream>
#include <conio.h>

void pedirDatos();
void funpot(int x, int y);

int numero, exponente;


int main(){
	
	pedirDatos();
	
	funpot(numero,exponente);
	
	getch();
	return 0;
}
void pedirDatos(){
	std::cout << "Digite un numero: ";
	std::cin >> numero;
	
	std::cout << "Digite el Exponente: ";
	std::cin >> exponente;
}
void funpot(int x, int y){
	long r = 1;
	
	for(int i = 1; i <= y; i++){
		r *= x;
	}
	
	std::cout << "El resultado es: " << r;
}

