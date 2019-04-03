//Insertar Elementos en la Pila

#include <iostream>
#include <conio.h>
#include <stdlib.h>

//Creamos la Estrucutura del Nodo
struct Nodo{
	int dato;
	Nodo *siguiente;
};

//Prototipos de la función
void agregarPila(Nodo *&,int);
void sacarPila(Nodo *&, int &);

int main(){
	Nodo *pila = NULL;	
	int dato;
	
	std::cout << "Digite un Numero: "; std::cin >> dato;
	agregarPila(pila,dato);
	
	std::cout << "\nDigite otro numero: "; std::cin >> dato;
	agregarPila(pila,dato);
	
	std::cout << "\n\nSacando el ultimo elemento de la pila:  ";
	while (pila != NULL){//Mientras no sea el final de la pila. 
	 	sacarPila(pila,dato);
	 	
	 	if( pila != NULL ){
	 		std::cout << dato << ", ";
		 }else{
		 	std::cout << dato << ".";
		 }
	}
	
	getch();
	return 0;
}
void agregarPila(Nodo *&pila,int n){
	Nodo *nuevo_nodo = new Nodo();//Reservamos el espacio en memoria o intanciamos el nuevo nodo
	nuevo_nodo->dato = n; //Asignamos en valor de n pasado por parametro de la función a la variable dato de la estructura
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;

	std::cout << "\n\tElemento " << n << " agregado a Pila correctamente!";
	
}
void sacarPila(Nodo *&pila, int &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
