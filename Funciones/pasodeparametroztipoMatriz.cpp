/*Paso de Parametros tipo matriz

Elevar al cuadrado todos los elementos de una matriz
*/

#include <iostream>
#include <conio.h>

void mostrarMatriz(int m[][3],int,int);
void calcularCuadrado(int m[][3],int,int);
void mostrarMatrizElevada(int m[][3],int,int);

int main(){
	const int FILAS = 2;
	const int COLUMN = 3;
	int m[FILAS][COLUMN] = {{1,2,3},{4,5,6}};
	
	mostrarMatriz(m,FILAS,COLUMN);
	calcularCuadrado(m,FILAS,COLUMN);
	mostrarMatrizElevada(m,FILAS,COLUMN);
	
	
	getch();
	return 0;
}
void mostrarMatriz(int m[][3],int filas,int column){
	std::cout << "Mostrando Matriz Original \n";
	
	for(int i = 0; i < filas; i++){
		
		for(int j = 0; j < column; j++){
			std::cout << m[i][j] << " ";
		}
		
		std::cout << "\n";
		
	}
	
}
void calcularCuadrado(int m[][3],int filas,int column ){
	for(int i = 0; i < filas; i++){
		
		for(int j = 0; j < column; j++){
			m[i][j] *= m[i][j];
		}
		
	}
}
void mostrarMatrizElevada(int m[][3],int filas,int column){
	std::cout <<"\n\n Mostrando Matriz Elevada Al Cuadrado \n";
	
	for(int i = 0; i < filas; i++){
		
		for(int j = 0; j < column; j++){
			std::cout << m[i][j] << " ";
		}
		std::cout << "\n";
	}
	
	
}
