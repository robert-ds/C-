//Busqueda Secuencial

#include <iostream>
#include <conio.h>


int main(){
	int n[] = {3,4,5,2,1};
	int i,dato;
	char band = 'F';
	
	dato = 10;
	
	//Busqueda Secuencial
	i=0;
	
	while((band == 'F') &&  (i < 5)){
		if(n[i] == dato){
			band = 'V';
		}
		i++;
	}
	
	if( band == 'F' ){
		std::cout << "El Dato No Existe en el arreglo!";
	}else if( band == 'V' ){
		std::cout << "EL dato fue encontrado en la posicion " << i-1 << " del Arreglo";	
	};
	
	getch();
	return 0;
}
