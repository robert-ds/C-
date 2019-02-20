/* Hacer un programa para rellenar una matriz pidiendo al usuario el numero de filas y columnas, posteriormente mostrar la matriz 
en pantalla
 */
 
#include <iostream>
#include <conio.h>

int main(){
	
	int n[100][100],filas,columnas;
	
	std::cout << "Digite el numero de Filas: ";
	std::cin >> filas;
	std::cout << "Digite el numero de columnas: ";
	std::cin >> columnas;
	
	for(int i = 0; i < filas; i++){
		
		for(int j = 0; j < columnas; j++)
		{
			std::cout << "Digite un numero [" << i << "][" << j << "]: ";
			std::cin >> n[i][j];
		}
		
	}
	
	for(int i = 0;i < filas;i++){
		
		for(int j = 0; j < columnas; j++){
			std::cout <<n[i][j];
		}	
		
		std::cout << "\n";
		
	}
	
	
	getch();
	return 0;
}
