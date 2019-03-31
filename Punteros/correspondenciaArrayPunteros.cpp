//Correspondencia entre arrays y punteros

#include <iostream>
#include <conio.h>

int main(){
	int n[] = {1,2,3,4,5};
	int *dir_n;
	
	dir_n = n;
	
//	for(int i = 0; i < 5; i++){
//		std::cout << "Elemento del vector [" << i << "]:" << *dir_n++ << "\n";
//	}
	
	for(int i = 0; i < 5; i++){
		std::cout << "\nPosición de Memoria de: " << n[i] << " es: " << dir_n++;
	}	
	
	getch();
	return 0;
}
