/*Transmición de arreglos
Ejemplo: Hallar el máximo elemento de un arreglo.
*/

#include <iostream>
#include <conio.h>

//Prototipo de función
int hallarMax(int *,int);

int main(){
	const int nElementos = 5;
	int n[nElementos] = {3,6,8,4,10};
	
	std::cout << "El Mayor Elemento es: " << hallarMax(n,nElementos);
	
	
	getch();
	return 0;
}
int hallarMax(int *dir_n,int nElementos){
	int max = 0;
	
	//Recorremos el arreglo para comprobar cual es el mayor de los elementos
	for(int i = 0; i < nElementos; i++){
		if( *(dir_n+i) > max ){
			max = *(dir_n+i);
		}
	}
	
	return max;
}
