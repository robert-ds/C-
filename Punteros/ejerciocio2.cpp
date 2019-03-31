/*Ejercicio 2: Determinar si un número es primo o no; con punteros y además indicar en que posición de memoria se guardo el número.*/

#include <iostream>
#include <conio.h>

 //NO RESUELTO!!
 
int main(){
	int m,*dir_m;
	
	std::cout << "Digite un numero entero: "; std::cin >> m;
	dir_m = &m;
	
	if( *dir_m >= 0 ){
		
		if( *dir_m / 1 == *dir_m && *dir_m / *dir_m == 1 ){
			
			if( *dir_m % 3 == 0 && *dir_m % 2 == 0 ){
				std::cout << "El numero no es primo";
			}else{
			std::cout << "El numero " << *dir_m << " es primo ";
			std::cout << "La direccon de memoria es " << dir_m;
			}
			
		}else{
			std::cout << "El numero no es primo";
		}
		
	}else{
		std::cout << "El numero " << *dir_m << " no es natural, por tanto, no es primo!";
	}
	
	getch();
	return 0;
}
