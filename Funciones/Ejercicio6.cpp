/* Escriba una plantlla de funcion llamada maximo que devuelva el valor máximo de tres argumentos que se transmitan
a la funcion cuando sea llamada. Suponga que los tres argumentos serán del mismo tipo de datos */

#include <iostream>
#include <conio.h>

template <class MAX>
int maximo( MAX dato );


int main(){
	
	int a = 4;
	int b = 5;
	int c = 6;
	
	maximo(a,b,c);
	
	getch();
	return 0;
}

template <class MAX>
void maximo( MAX dato ){

	if( arg1 > arg2 ){
		
		if( arg1 > arg3 ){
			std::cout << "El Primer Dato ingresado es mayor que el segundo y el tercer Dato: " << arg1 << "\n";
		}
	}
	
	if( arg2 > arg1 ){
		
		if( arg2 > arg3 ){
			std::cout << "El Segundo Dato ingresado es mayor que el Primer y tercer Dato: " << arg2 << "\n";
		
		}
		
	if( arg3 > arg1 ){
		
		if( arg3 > arg1 ){
			std::cout << "El Tercer Dato ingresado es mayor que el Primer y Segundo Dato: " << arg3 << "\n";
		
		}
		
		
		
	}
}
	
	
	
	
	
	
}

