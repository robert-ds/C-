#include <iostream>

struct CD{
	char titulo[30];
	char artista[25];
	int numCanciones;
	float precio;
	char fecha_compra[20];
} cd1 = {"Bucaramanga","Eddy",12,20.30,"20/04/1999"};


int main(){
	printf("Los Datos del artista son: %f",cd1.precio);
		
	return 0;
}
