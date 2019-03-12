//Ejercicio 1: Escriba una funcion llamada mult() que acepte dos numeros en punto flotante con parametros, multiplique estos dos 
//numeros en punto flotante y desplieque el resultado

#include <iostream>
#include <conio.h>

void pedirDatos();
void mult(float a , float b);

float n1, n2;

int main(){
	
	pedirDatos();
	mult(n1,n2);
	
	getch();
	return 0;
}

void pedirDatos(){
 std::cout << "Digite 2 numeros: ";
 std::cin >> n1 >> n2;	
}

void mult(float a , float b){
	float r;
	
	r = a * b;
	
	std::cout << "La Multiplicación es: " << r;
	//return r;
}
