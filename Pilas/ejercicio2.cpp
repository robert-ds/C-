/*Ejercicio 2: Hacer un programa en c++, utilizando pilas que contenga el siguiente menú:
1. Insertar un Caracter a la pila.
2. Mostrar todos los elementos de la pila
3. Salir.
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

//Estructura Base de la Pila
struct Nodo{
	char dato;
	Nodo *siguiente;
};

//Prototipo de la función que Insertará el carecter en la Pila!
void insertaCaracter(Nodo *&,char);
void muestraCaracteresPila(Nodo *&,char&);


int main(){
	Nodo *pila = NULL;
	char crt;
	char rpt[20];
	
	do{
	   //Pedimos al Usuario que digite el Caracter!
		std::cout << "Digite un Caracter: ";
		std::cin >> crt;
		insertaCaracter(pila,crt);//Implementamos la función que agrega caracteres a la pila!
		
		//Muestra los Caracteres Ingresados a la pila!
		std::cout << "\nLos Caracteres Ingresados a la pila son: ";
		while( pila != NULL ){//Siempre y cuando no sea null
			muestraCaracteresPila(pila,crt);
			if( pila != NULL ){
				std::cout << crt << ", ";
			}else
			{
				std::cout << crt << ".";
			}
		}
		
		//Preguntamos al usuario si desea seguir insertando caracteres!
		std::cout << "\n\nDesea Seguir Agregando Caracteres a la Pila(continuar/salir): ";
		std::cin >> rpt;		
		
	}while( ( rpt == "continuar") || ( rpt == "CONTINUAR") );
	
	
	getch();
	return 0;
}
void insertaCaracter(Nodo *&pila,char c){
	Nodo *nuevo_caracter = new Nodo();
	nuevo_caracter->dato = c;
	nuevo_caracter->siguiente = pila;
	pila = nuevo_caracter;
	
	//std::cout << "\nEl Caracter que ingreso es: " << c;
	
}
void muestraCaracteresPila(Nodo *&pila,char &c){
	Nodo *aux = pila;
	c = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
