/*Ejercicio 3: Rellenar un array de 10 n�meros, posteriormente utilizando punteros indicar cuales son n�meros pares y su posici�n en memoria.
*/

#include <iostream>
#include <conio.h>


int main(){
	int n[10], *dir_n;
	
	for(int i = 0; i < 10; i++){
		std::cout << "Digite un numero[" << i << "]: "; std::cin >> n[i];
	}
	
	dir_n = n; // Posici�n de memoria donde comienza numeros
	
	for(int i = 0; i < 10 ; i++){
		if( *dir_n % 2 == 0){
			std::cout << "El numero " << *dir_n << " es par\n";
			std::cout << "Posici�n: " << dir_n << "\n\n";
		}
		dir_n++;
	}
	
	getch();
	return 0;
}
