//Insertar Elementos en la Pila

#include <iostream>
#include <conio.h>
#include <stdlib.h>

//Creamos la Estrucutura del Nodo
struct Nodo{
	int dato;
	Nodo *siguiente;
	
};

//Prototipo de la función
void agregarPila(Nodo *&,int);

int main(){
	Nodo *pila = NULL;	
	int n1,n2;
	
	std::cout << "Digite un Numero: "; std::cin >> n1;
	agregarPila(pila,n1);
	
	std::cout << "\nDigite otro numero: "; std::cin >> n2;
	agregarPila(pila,n2);
	
	getch();
	return 0;
}
void agregarPila(Nodo *&pila,int n){
	Nodo *nuevo_nodo = new Nodo();//Reservamos el espacio en memoria o intanciamos el nuevo nodo
	nuevo_nodo->dato = n; //Asignamos en valor de n pasado por parametro de la función a la variable dato de la estructura
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;

	std::cout << "\nElemento " << n << " agregado a Pila correctamente!";
	
}
