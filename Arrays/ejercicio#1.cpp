/* Escriba un programa que defina un vector de numeros y calcule la suma de sus elementos */

#include <iostream>
#include <conio.h>

int main(){
	int a[] = {9,7,3,2,1};
	int suma = 0;
	
	for(int i = 0; i < 5 ; i++){
		suma += a[i];
	}
	
	std::cout << "La suma de su vector es: " << suma;
		
	getch();
	return 0;
}
