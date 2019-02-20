/* Hacer un programa que lea 5 numeros en un arreglo, los copie a otro arreglo multiplicados por 2 y muestre el segundo arreglo */

#include <iostream>
#include <conio.h>

int main(){
	int x[5];
	int y[5];
	
	for(int i = 0;i < 5;i++){
	std::cout << "Digite 5 numeros: ";
	std::cin >> x[i];
	}
	
	for(int i = 0;i < 5; i++){
		y[i] = x[i] * 2;
		std::cout << y[i] << std::endl;
	} 
	
	getch();
	return 0;
}
