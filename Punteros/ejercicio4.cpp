/*Ejercicio 4: Rellenar un arreglo con n números, posteriormente utilizando punteros determinar el menor elemento del arreglo. */

#include <iostream>
#include <conio.h>


int main(){
	int m[5], *dir_m,min,aux,i,j;
	
	for(i = 0; i < 5; i++){
		std::cout << "Digite un numero [" << i << "]: "; std::cin >> m[i];
	}
	
	dir_m = m; //Posición en memoria del arreglo
	
	//Comprobar el menor de los numeros del arreglo
	for(i = 0; i < 5; i++){
		min = i;
		
		//Localiza el numero menor. Algoritmo de Ordenamiento * Seleccion 
		for(j = i + 1; j < 5; j++){
			
			if( dir_m[j] < dir_m[min]){
				min = j;
			}
	//Intercambia el numero menor a la posición 0 del arreglo
		aux = dir_m[i];
		dir_m[i] = dir_m[min];
		dir_m[min] = aux;			
				
	}
	
	std::cout << "El numero menor de los datos que ingreso es: " << dir_m[0];
	
	
	getch();
	return 0;
}}
