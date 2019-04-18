//Mostrar Todo el Arbol

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
//Prototipo de la funci�n que crea el nodo Raiz
Nodo *crearNodo(int);

//Funci�n Que inserta elementos en el arbol
void insertarNodo(Nodo *&,int);

//Funci�n que muestra los elementos del arbol
void mostrarArbol(Nodo *, int);

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
		
		if( n < valorRaiz ){//Si el elemento es menor a la raiz, se insertar� al lado izquierdo
			insertarNodo( arbol -> izq, n );
		}else{//Si el elemento es mayor a la raiz, se insertar� al lado derecho
			insertarNodo( arbol -> der, n );
		}
	}
	
	
}
void mostrarArbol(Nodo *arbol, int contador){
	
	if( arbol == NULL ){//Comprobamos si el arbol esta vac�o
		return;
	}else{
		mostrarArbol(arbol -> der, contador + 1);
		
		for( int i = 0; i < contador; i++ ){
			std::cout << "   ";
		}
		std::cout << arbol -> dato << "\n";
		
		mostrarArbol(arbol -> izq, contador + 1);
	}
	
	
}
void Menu(){
	int dato,opc,contador = 0;
	
	do{
		std::cout << "\t.:MENU:." << "\n";
		std::cout << "1. Insertar un Nuevo Nodo" << "\n";
		std::cout << "2. Mostrar el Arbol Completo" << "\n";
		std::cout << "2. Salir" << "\n";
		std::cout << "DIGITE UNA OPCION: ";
		std::cin >> opc;
		
		switch(opc){
			case 1:
				 std::cout << "Digite un N�mero: ";
				 std::cin >> dato;
				 insertarNodo(arbol,dato);//Insertamos Un nuevo Nodo
				 std::cout << "\n";
				 system("pause");
			break;
			case 2:
				std::cout << "\nMostrando el Arbol Completo\n\n";
				mostrarArbol(arbol,contador); std::cout << "\n";
				system("pause");
			break;
			
		}
		system("cls");
	}while( opc != 2  );
	
}
