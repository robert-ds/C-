/*Transmisión de Direcciones

Ejemplo: Intercambiar el valor de 2 variables.

*/
#include <iostream>
#include <conio.h>

void intercambio(float *,float *); //Prototipo

int main(){
	float n = 20.8, m = 6.78;
	
	std::cout << "Primer Numero: n = " << n << "\n";
	std::cout << "Segundo Numero: m = " << m << "\n";
	
	//Pasamos la dirección de Memoria de cada variable
	intercambio(&n,&m);
	
	//Mostramos los valores intercambiados de las variables
	std::cout << "\n\nDespues del Intercambio: \n\n";
	
	std::cout << "El nuevo valor de n es: " << n << "\n";
	std::cout << "El nuevo valor de m es: " << m << "\n";
	
	getch();
	return 0;
}
void intercambio(float *dir_n,float *dir_m){
	float aux;
	//Intercambia Valores de las Variables
	aux = *dir_n;
	*dir_n = *dir_m;
	*dir_m = aux;
}
