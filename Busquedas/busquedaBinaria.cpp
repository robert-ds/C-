//Busqueda Binaria

#include <iostream>
#include <conio.h>


int main(){
	//El arreglo debe estar ordenado de forma ascendente!
	int n[] = {1,2,3,4,5};
	int inf,sup,mitad,dato;
	char band = 'F';
	
	dato = 5;
	
	//Algoritmo Busqueda Binaria
	inf = 0;
	sup = 5;
	
	while(inf <= sup){
		mitad = (inf + sup)/2;
		
		if(n[mitad] == dato){
			band = 'V';
			break;
		}
		if(n[mitad] > dato){
			sup = mitad;
			mitad = (inf + sup)/2;
		}
		if(n[mitad] < dato){
			inf = mitad;
			mitad = (inf + sup)/2;
		}
	}
	
	//Muestra en pantalla el resultado
	if( band = 'V'){
		std::cout << "El numero a sido encontrado en la posición: " << mitad;
	}else{
		std::cout << "El Numero no ha sido Encontrado!";
	}
	
	getch();
	return 0;
}
