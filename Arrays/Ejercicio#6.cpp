/* Realiza un programa que defina una matriz de 3*3 y escriba un ciclo para que muestre la diagonal principal de la matriz */

#include <iostream>
#include <conio.h>

int main(){
	int matriz[3][3] ={2,5,6,
					   1,3,5,
					   7,4,9};
	
	for(int i = 0; i < 3; i++){
		
		for(int j = 0; j < 3; j++)
		{
			std::cout << matriz[i][j];
			
		}
		
		std::cout << "\n";
	}
	
	for(int i = 0; i < 3; i++){
		
		for(int j = 0; j < 3; j++)
		{
			
			std::cout << "La diagonal principal es:" << matriz[i = j][j = i] << std::endl;
			
		}
		
		std::cout << "\n";
		
	}
	
	
	getch();
	return 0;
}
