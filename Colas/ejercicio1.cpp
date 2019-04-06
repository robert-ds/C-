/*Ejercicio 1: Hacer un programa en c++, Utilizando Colas que contenga el siguiente menú:
1. Insertar un Caracter a una Cola
2. Mostrar todos los elementos de la cola.
3. Salir

*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

//Estructura principal del nodo
struct Nodo{
	char dato;
	Nodo *siguiente;
};

//Prototipo Función Insertar
void insertarCaracter(Nodo *&, Nodo *&, char);

//Prototipo Comprueba el estado de la cola
bool cola_vacia(Nodo *);

//Prototipo Muestra Los elementos de la Cola
void muestraCola(Nodo *&, Nodo *&, char &);

//Prototipo de la función Menú
void menu();

int main(){
	
	menu();
	
		
	getch();
	return 0;
}

//Función que Inserta Caracteres a la Cola
void insertarCaracter(Nodo *&frente, Nodo *&fin, char c){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo -> dato = c;
	nuevo_nodo -> siguiente = NULL;
	
	if( cola_vacia(frente) ){
		frente = nuevo_nodo;
		}else{
		fin -> siguiente = nuevo_nodo;
		}
	
 		fin = nuevo_nodo;
 	
	std::cout << "\n\tElemento " << c << " Insertado Correctamente a la Cola "; 	
	
}


//Estado de la Cola
bool cola_vacia(Nodo *frente){
	return ( frente == NULL )? true : false;
}
//Muestra Elementos de la Cola
void muestraCola(Nodo *&frente, Nodo *&fin, char &c){
	c = frente -> dato;
	Nodo *aux = frente;
	
	if( frente == fin ){
		frente = NULL;
		fin = NULL;
	}else{
		frente = frente -> siguiente;
	}
	
	delete aux;
}
//Menú
void menu(){
	int opc;
	char dato;
	
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	
	do{
		std::cout << "\t.::MENU::.";
		std::cout << "\n1. Insertar un Caracter a una Cola";
		std::cout << "\n2. Mostrar todos los elementos de la cola";
		std::cout << "\n3. Salir";
		std::cout << "\n\tElija Una Opcion: ";
		std::cin >> opc;
		
		switch(opc){
			case 1:			 
			std::cout << "\nIngrese el caracter: ";
			std::cin >> dato;
			
			insertarCaracter(frente,fin,dato);
			
			break;
			
			case 2: 
				std::cout << "\nMostrando Elementos de la Cola!: ";
				
				while( frente != NULL ){
				muestraCola(frente,fin,dato);
				
				if( frente != NULL ){
					 std::cout << dato << ", ";
				}else
				{
					std::cout << dato << ".\n";
				}	
				}
				system("pause");//Para visualizar detalladamente los elementos que se imprimen en pantalla
			    break;
			
			case 3:	break;
		}
		system("cls");
	
 	}while( opc != 3 );
}

