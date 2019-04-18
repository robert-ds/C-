//Insertar un Nodo en el Arbol

#include <iostream>
#include <conio.h>
#include <stdlib.h>


struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;	
};

//Creamos El Arbol
Nodo *arbol = NULL;

//Prototipos de Funciones
//Prototipo de la función que crea el nodo Raiz
Nodo *crearNodo(int);

//Función Que inserta elementos en el arbol
void insertarNodo(Nodo *&,int);

//Menu
void Menu();

int main(){
	
	Menu();

	
	getch();
	return 0;
}

Nodo *crearNodo(int n){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo -> dato = n;
	nuevo_nodo -> der = NULL;
	nuevo_nodo -> izq = NULL;
	
	return nuevo_nodo;
}
void insertarNodo(Nodo *&arbol,int n){
	if( arbol == NULL ){//Si El arbol esta vacio, Creamos un nuevo nodo
		Nodo *nuevo_nodo = crearNodo(n);
		arbol = nuevo_nodo;
	}else{//Si el arbol tiene un nodo o mas
		int valorRaiz = arbol -> dato;// Obtenemos el valor de la raiz
		
		if( n < valorRaiz ){//Si el elemento es menor a la raiz, se insertará al lado izquierdo
			insertarNodo( arbol -> izq, n );
		}else{//Si el elemento es mayor a la raiz, se insertará al lado derecho
			insertarNodo( arbol -> der, n );
		}
	}
	
	
}
void Menu(){
	int dato,opc;
	
	do{
		std::cout << "\t.:MENU:." << "\n";
		std::cout << "1. Insertar un nuevo nodo" << "\n";
		std::cout << "2. Salir" << "\n";
		std::cout << "DIGITE UNA OPCION: ";
		std::cin >> opc;
		
		switch(opc){
			case 1:
				 std::cout << "Digite un Número: ";
				 std::cin >> dato;
				 insertarNodo(arbol,dato);//Insertamos Un nuevo Nodo
				 std::cout << "\n";
				 system("pause");
			break;
			case 2: break;
			
		}
		system("cls");
	}while( opc != 2  );
	
}
