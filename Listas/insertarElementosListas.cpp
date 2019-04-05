//Insertar Elementos en la Lista

#include <iostream>
#include <conio.h>
#include <stdlib.h>

//Estructura Principal
struct Nodo{
	int dato;
	Nodo *siguiente;
};

void insertarLista(Nodo *&, int);

int main(){
	Nodo *lista = NULL;
	
	int dato;
	
	std::cout << "Digite un Numero: ";
	std::cin >> dato;
	insertarLista(lista,dato);
	
	std::cout << "Digite un Numero: ";
	std::cin >> dato;
	insertarLista( lista,dato );
	
	getch();
	return 0;
}

//Funci�n que inserta elementos en la lista
void insertarLista(Nodo *&lista, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo -> dato = n;
	
	Nodo *aux1 = lista;
	Nodo *aux2;
	
	
	while( (aux1 != NULL) && (aux1 -> dato < n) ){
		aux2 = aux1;
		aux1 = aux1 -> siguiente;
	}
	
	if( lista == aux1 ){
		lista = nuevo_nodo;
	}else{
		aux2 -> siguiente = nuevo_nodo;
	}
		nuevo_nodo -> siguiente = aux1;
	
	std::cout << "\nElemento " << n << " Insertado a la Lista Correctamente!\n";
	
	
}
