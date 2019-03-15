/* Paso de Parametros de tipo Vector

Parametros de la funci�n:
	void nombreDeFunci�n(tipo nombreArreglo[], int tam�oArreglo[])
	
Llamada a la funci�n
	nombreDeFunci�n(nombreArreglo, tama�oArreglo)	

*/

//Cuadros de los elementos del vector

#include <iostream>
#include <conio.h>

void cuadrado(int vec[],int);
void muestra(int vec[],int);

int main(){
	const int TAM = 5;
	int vect[TAM] = {1,2,3,4,5};
	
	
	muestra(vect,TAM);
	cuadrado(vect,TAM);
	muestra(vect,TAM);
	
	
	getch();
	return 0;
}
void cuadrado(int vec[],int tam){
	for(int i=0;i < tam; i++){
		vec[i] *= vec[i];
	}
}
void muestra(int vec[],int tam){
	for(int i = 0; i < tam; i++){
		std::cout << vec[i] << " ";
	}
}
