#include <iostream>
#include <conio.h>

//Prototipo de Funcion
int encontrarMax(int x, int y);

int main(){
	
	int n1, n2;
	int mayor;
	
	std::cout << "Digite Dos Numeros ";
	std::cin >> n1 >> n2;
	
	mayor = encontrarMax(n1,n2);
	
	std::cout << "El numero mayor es: " << mayor;
	
	getch();
	return 0;
}

// Estructura de la Funcion
int encontrarMax(int x, int y){
	int numMax;
	
	if( x > y){
		numMax = x;
	}
	else
	{
		numMax = y;
	}
	
	return numMax;
}
