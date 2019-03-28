 //Ordenamientos - Método Burbuja
 
 #include <iostream>
 #include <conio.h>
 
 
 int main(){
	int n[] = {4,2,1,3,5};
	int i,j,aux;
	
	//Implementación del Algoritmo del Método Burbuja
	for( i = 0; i < 5; i++){
		
		for( j = 0; j < 5; j++){
			
			if( n[j] > n[j+1] ){
				aux = n[j];
				n[j] = n[j+1];
				n[j+1] = aux;
				
			}
		}
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
 
