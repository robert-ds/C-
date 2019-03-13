/* Ejercicio 5: Escriba una plantilla de funcion llamada despliegue() que despliegue el valor del argumento unico que 
se le transmite cuando es invocada la funcion */

#include <iostream>
#include <conio.h>


template <class TIPOD>
void despliegue(TIPOD dato);

int main(){
	int a = 4;
	float b = 15.67;
	double c = 567.456456;
	char d = 'A';
	
	despliegue(a); 
	despliegue(b); 
	despliegue(c); 
	despliegue(d); 
	
	
	getch();
	return 0;
}

template <class TIPOD>
void despliegue(TIPOD dato){
	std::cout << "El Dato es: " << dato << "\n";
	
}

