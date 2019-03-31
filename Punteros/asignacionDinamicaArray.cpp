/*Asignaci�n Din�mica de Arreglos

-----------------------Operadores----------------------------
New: Reserva el n�mero de bytes solicitado por la declaraci�n.
Delete: Libera un bloque de bytes reservado con anterioridad.

Ejemplo: Pedir al usuario n calificaciones y almacenarlas en un arreglo din�mico.

 */
 
#include <iostream> 
#include <conio.h>
#include <stdlib.h> // Permite la utilizaci�n de Arreglos Din�micos. New y Delete


//Prototipos de Funci�n
void pedirNotas();
void mostrarNotas();

//Variables Globales
int numCalif,*calif;

int main(){
	pedirNotas();
  	mostrarNotas();
	
	//Liberamos la memoria que reservamos al pedir Notas
	delete[] calif;
	
	getch();
	return 0;
}
void pedirNotas(){
	std::cout << "Digite el Numero de Calificaciones: "; std::cin >> numCalif;
	
	calif = new int[numCalif]; //Crear Arrglo de Tipo Din�mico
	
	//Asignando las notas en cada posici�n del arreglo, enpezando por la posici�n 0.
	for(int i = 0;i < numCalif;i++){
		std::cout << "\nIngrese Una Nota: ";
		std::cin >> calif[i];
	}
}
void mostrarNotas(){
	std::cout << "\n\nMostrando Notas del Usuario\n";
	
	//Recorremos el Arreglo desde la Posici�on 0 y mostramos la nota que contiene
	for(int i = 0; i< numCalif; i++){
		std::cout << calif[i] << "\n";
	}
}

