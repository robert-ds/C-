/* Ejercicio 20: Realice una funcion recursiva que sume los primeros n enteros positivos
Nota: Para plantear la funcion recursiva tenga en cuenta que la suma puede expresarse mediante la siguiente recurrencia:

	suma(n) = 1				, si n = 1
			 n+suma(n-1) 	, si n > 1
 */
 
#include <iostream>
#include  <conio.h>

int sumar(int);

int main(){
	int nElementos;
	
	do{
		std::cout << "Digite un numero entero positivo: ";
		std::cin >> nElementos;
	}while( nElementos <= 0 );
	
	std::cout << "La Suma Recursiva de Elementos es: " << sumar(nElementos);
	
	
	getch();
	return 0;
}
int sumar(int n){
	int suma = 0;
	
	if( n == 1 ){
		suma = 1;
	}else{
		 suma = n + sumar(n-1);
	}
	
	return suma;
	
}
