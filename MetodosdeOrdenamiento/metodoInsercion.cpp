//Metodo por Inserción

#include <iostream>
#include <conio.h>

int main(){
	int n[] = {4,2,3,1,5};
	int i,pos,aux;
	
	//Implementando el algoritmo por Inserción
	for(i = 0; i < 5;i++){
		pos = i;
		aux = n[i];
		
		while((pos > 0) && (n[pos-1] > aux) ){
			n[pos] = n[pos-1];
			pos--;
			
		}
		n[pos] = aux;
	}
	
	std::cout << "Orden Ascendente: ";
	for(i = 0;i < 5; i++){
		std::cout << n[i] << " ";
	}
	
	std::cout << "Orden Descendente: ";
	for(i = 4; i >= 0;i--){
		std::cout << n[i] << " ";
	}
	
	getch();
	return 0;
}
