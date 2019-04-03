/*Ejercicio 1: Hacer un programa para agregar números enteros en una pila, hasta que el usuario decida, despues mostrar los numeros introduci_
dos en la pila.

*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//Prototipo de la función
void agregarPila(Nodo *&,int);
void sacarPila(Nodo *&,int &);
	
int main(){
	Nodo *pila = NULL;
	int dato;//variable que almacena el dato que ingresa el usuario
	char rpt;//variable que almacena la respuesta del usuario
	
	//Pedimos al Usuario que digite un numero
	//Agregando Elementos
	do{
		std::cout << "Digitame un Numero: ";
		std::cin >> dato;
		agregarPila(pila,dato);
		
		std::cout << "\n\nDeseas Agregar otro numero a la PILA(s/n): ";
		std::cin >> rpt;
		
	}while( (rpt == 'S') || (rpt == 's') );//Si la condición se cumple se repetira hasta que el usuario cambie de parecer!
	
	//Mostrando o Sacando los datos de la pila
	std::cout << "\nSacando Todos Los Elementos de Pilas: ";
	while( pila != NULL ){//Mientras no sea el final de la pila
		sacarPila(pila,dato);
		if( pila != NULL ){
			std::cout << dato <<  ", ";
		}else
		{
			std::cout << dato << ".";
		}
	}
	
	getch();
	return 0;
}
void agregarPila(Nodo *&pila,int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	std::cout << "\nEl elemento " << n << " ha sido agregado a pila correctamente!";
}
void sacarPila(Nodo *&pila,int &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	
	delete aux;
	
}
