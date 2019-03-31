/*Asignación Dinámica de Arreglos

-----------------------Operadores----------------------------
New: Reserva el número de bytes solicitado por la declaración.
Delete: Libera un bloque de bytes reservado con anterioridad.

Ejemplo: Pedir al usuario n calificaciones y almacenarlas en un arreglo dinámico.

 */
 
#include <iostream> 
#include <conio.h>
#include <stdlib.h> // Permite la utilización de Arreglos Dinámicos. New y Delete


//Prototipos de Función
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
	
	calif = new int[numCalif]; //Crear Arrglo de Tipo Dinámico
	
	//Asignando las notas en cada posición del arreglo, enpezando por la posición 0.
	for(int i = 0;i < numCalif;i++){
		std::cout << "\nIngrese Una Nota: ";
		std::cin >> calif[i];
	}
}
void mostrarNotas(){
	std::cout << "\n\nMostrando Notas del Usuario\n";
	
	//Recorremos el Arreglo desde la Posiciñon 0 y mostramos la nota que contiene
	for(int i = 0; i< numCalif; i++){
		std::cout << calif[i] << "\n";
	}
}

