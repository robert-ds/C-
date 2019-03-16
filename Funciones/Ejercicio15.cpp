/*Ejercicio 15: Desarrollar una funcion que determine si una matriz es simétrica o no.

Una Matriz es Simetrica: A = A^t

-La matriz debe ser cuadrada.
-Aij = Aji

|2  5  9|       |2  5  9|
|5  8 -1|  ->   |5  8 -1|
|9 -1 10|       |9 -1 10|
*/

#include <iostream>
#include <conio.h>

void pedirDatos();
void comprobarSimetria(int m[][100],int,int);

int m[100][100],FILAS,COLUMN;

int main(){
	pedirDatos();
	comprobarSimetria(m,FILAS,COLUMN);
	
	
	getch();
	return 0;
}
void pedirDatos(){
	std::cout << "Digite el numero de  Filas de la matriz: ";
	std::cin >> FILAS;
	std::cout << "Digite el numero de Columnas de la matriz:  ";
	std::cin >> COLUMN;
	
	for(int i = 0; i < FILAS; i++){
		
		for(int j = 0; j < COLUMN; j++){
			std::cout << "Digite un numero [" << i << "][" << j << "]: ";
			std::cin >> m[i][j];
		}
		
	}		
}
void comprobarSimetria(int m[][100],int FILAS,int COLUMN){
	int cont = 0;

	if(FILAS == COLUMN){
		
		for(int i = 0; i < FILAS; i++){
			
			for(int j = 0; j < COLUMN; j++){
				if(m[i][j] == m[j][i]){
					cont++;
				}
			}
			
		}
	}
	
	if(cont == FILAS * COLUMN){
		std::cout << "La matriz es Simetrica!! ";
		
	}else
	{
		std::cout << "La matriz no es Simetrica!!";
	}

}
