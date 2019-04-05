//Eliminar Elementos de la Cola

#include <iostream>
#include <conio.h>
#include <stdlib.h>

struct Nodo{
	int dato;
	Nodo *siguiente;
};



//Prototipo de la Función Insertará en la cola
void insertarCola(Nodo *&, Nodo *&, int);

//Prototipo que comprueba el estado de la cola
bool cola_vacia(Nodo *);

//Prototipo de la funcion que Eliminará los elementos de la cola
void suprimirCola(Nodo *&, Nodo *&, int &);
	


int main(){
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	
	int dato;
	
	std::cout << "Digite un Numero: ";
	std::cin >> dato;
	insertarCola(frente,fin,dato);
	
	std::cout << "\nDigite un Numero: ";
	std::cin >> dato;
	insertarCola(frente,fin,dato);
	
	//Eliminar Elementos de la Cola
	while( frente != NULL ){
		suprimirCola(frente,fin,dato);
		
		if( frente != NULL ){
			std::cout << dato << ", ";
		}else{
			std::cout << dato << ".";
		}
	}
	
	
	getch();
	return 0;
}

//Función que Inserta Elementos 
void insertarCola(Nodo *&frente, Nodo *&fin, int n){
	Nodo *nuevo_nodo = new Nodo();//Intanciamos o Creamos el nuevo nodo (Objero)
	
	nuevo_nodo -> dato = n;
	nuevo_nodo -> siguiente = NULL;
	
	if( cola_vacia(frente) ){
		frente = nuevo_nodo;
	}else{
		fin->siguiente = nuevo_nodo;		
	}
	
	fin = nuevo_nodo;
	
	std::cout << "\n\tElemento " << n << " Insertado Correctamente a la cola! ";
	
}

//Función que verifica si la cola esta vacia
bool cola_vacia(Nodo *frente){
	return ( frente == NULL )? true : false;//Estructura de control simplificada
}

//Función que Elemina Elementos de la cola
void suprimirCola(Nodo *&frente, Nodo *&fin, int &n){
	n = frente -> dato;
	Nodo *aux = frente;
	
	if( frente == fin ){
		frente = NULL;
		fin = NULL;
	}else{
		frente = frente -> siguiente;
	}
	
	delete aux;
	
	
}
