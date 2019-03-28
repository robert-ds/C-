//ordenamiento Por Selección

#include <iostream>
#include <conio.h>


int main(){
	int n[] = {3,5,2,4,1};
	int i,j,aux,min;
	
	//Algoritmo
	for(i = 0; i < 5; i++){
		min = i;
		
		//Localiza el numero menor 
		for(j = i + 1; j < 5; j++){
			
			if(n[j] < n[min]){
				min = j;
			}
			
		}
		
		//Intercambia el numero menor a la posición correspondiente
		aux = n[i];
		n[i] = n[min];
		n[min] = aux;
		
	}
	
	std::cout << "Orden Ascendente: ";
	for(i = 0; i < 5; i++){
		std::cout << n[i] << " ";
	}
	
	std::cout << "\nOrden Descendente: ";
	for(i = 4; i >= 0; i--){
		std::cout << n[i] << " ";
	}
	
	getch();
	return 0;
}
