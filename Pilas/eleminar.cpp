//Eliminar Elementos de la Pila

#include <iostream> 
#include <conio.h>
#include <stdlib>

struct Nodo{
	int dato;
	Nodo *siguiente;
}

//Prototipo de la función
void sacarPila(Nodo *&, int &);

int main(){
	
	
	
	getch();
	return 0;
}
void sacarPila(Nodo *&pila, int &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}



