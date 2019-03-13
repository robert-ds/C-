/* Ejercicio 7: Intemcambiar el valor de 2 variables utilizando paso de parametros por referencia. */

#include <iostream>
#include <conio.h>

void intercambiar(int&,int&);

int main(){
 	int n1 = 10, n2 = 15;	
	
	std::cout << "El valor de n1 es: " << n1 << "\n";
	std::cout << "El valor de n2 es: " << n2 << "\n";
	
	intercambiar(n1,n2);
	
	std::cout << "\nEl nuevo valor de n1 es: " << n1 << "\n";
	std::cout << "\nEl nuevo valor de n2 es: " << n2 << "\n";
	
	getch();
	return 0;
}

void intercambiar(int& n1,int& n2){
	int aux;
	
	//Intercambiando los Valores
	aux = n1;
	n1 = n2;
	n2 = aux;
	
}
