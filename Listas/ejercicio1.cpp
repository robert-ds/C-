//Ejercicio 1: Crear una Lista que almacene "n" Números Enteros y calcular el menor y mayor de ellos

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//Prototipos de Funciones

//Inserta Elementos
void insertarLista(Nodo *&,int);

//Mostrar Todos los Elementos de la Lista
void mostrarLista(Nodo *);

//Calcula el mayor y menor elemento de la lista
void calculaMayorMenor(Nodo *);

int main(){
	Nodo *lista = NULL;
	int dato;
	char opc;
	
	do{
		std::cout << "Digite un Numero: ";
		std::cin >> dato;
		
		insertarLista(lista,dato);//Implementando la funcion para agregar elementos a la lista
		
		std::cout << "Desea Agregar otro numero(s/n): ";
		std::cin >> opc;
	}while( opc == 's' || opc == 'S');
	
	std::cout << "\nLos Elementos de la Lista Son:\n ";
	mostrarLista(lista);
	
	calculaMayorMenor(lista);
	
	getch();
	return 0;	
}

//Agregar Elementos a la lista
void insertarLista(Nodo *&lista,int n){
	Nodo *nuevo_nodo = new Nodo();
	Nodo *aux;
	
	nuevo_nodo -> dato = n;
	nuevo_nodo -> siguiente = NULL;
	
	//Si la Lista esta vacia	
	if( lista == NULL ){
		lista = nuevo_nodo;//Agregamos el primer elemento a la lista
	}else
	{
		aux = lista;//aux apunta al inicio de la lista
		
		while( aux -> siguiente != NULL ){
			aux = aux -> siguiente;//avanzamos posiciones en la lista
		}
		aux -> siguiente = nuevo_nodo;//Agrego el nuevo nodo a la lista
	}
	
	std::cout << "\tElemento " << n << " Agregado Correctamento a la Lista!\n";
}

//Mostrar Todos los Elementos de la Lista
void mostrarLista(Nodo *lista){
	while( lista != NULL ){//Mientras no sea el final de la lista
		std::cout << lista -> dato << " -> ";
		lista = lista -> siguiente; //Avanzamos al siguiente elemento de la lista
	}
	
}
//Calucular Mayor y Menor Elemento
void calculaMayorMenor(Nodo *lista){
	int mayor = 0, menor = 99999;
	
	while( lista != NULL ){//Recorremos la lista
	
		if( lista -> dato > mayor ){//Calculando el Mayor
			mayor = lista -> dato;
		}
		
		if( lista -> dato < menor ){//calculando el Menor Elemento de la lista
			menor = lista -> dato;
		}
		
		lista = lista -> siguiente;//avanzamos una posición en lista
		
	}
	
	//Imprime el Mayor elemento
	std::cout << "\nEl Mayor elemento es: " << mayor << "\n";

	//Imprime el menor elemento
	std::cout << "\nEl Menor elemento es: " << menor << "\n";
	
	
}
