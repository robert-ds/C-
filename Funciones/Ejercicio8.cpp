//Devolver Valores Multiples
//Sumar y multiplicara 2 numeros

#include <iostream>
#include <conio.h>

void calcular(int,int,int&,int&);

int main(){
	int n1, n2, suma = 0, producto;
	
	std::cout << "Digite 2 Numeros: ";
	std::cin >> n1 >> n2;	
	
	calcular( n1,n2,suma,producto );
	
	std::cout << "El valor de la suma es: " << suma << "\n";
	std::cout << "El valor del Producto es: " << producto << "\n";
	
	getch();
	return 0;
}
void calcular(int n1,int n2,int& suma,int& producto){
	
	suma = n1 + n2;
	producto = n1 * n2;
	
}
