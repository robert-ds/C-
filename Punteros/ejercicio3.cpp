/*Ejercicio 3: Rellenar un array de 10 números, posteriormente utilizando punteros indicar cuales son números pares y su posición en memoria.
*/

#include <iostream>
#include <conio.h>


int main(){
	int n[10], *dir_n;
	
	for(int i = 0; i < 10; i++){
		std::cout << "Digite un numero[" << i << "]: "; std::cin >> n[i];
	}
	
	dir_n = n; // Posición de memoria donde comienza numeros
	
	for(int i = 0; i < 10 ; i++){
		if( *dir_n % 2 == 0){
			std::cout << "El numero " << *dir_n << " es par\n";
			std::cout << "Posición: " << dir_n << "\n\n";
		}
		dir_n++;
	}
	
	getch();
	return 0;
}
