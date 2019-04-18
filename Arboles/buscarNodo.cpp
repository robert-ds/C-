//Buscar Nodo en el Arbol
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
//Prototipo de la función que crea el nodo Raiz
Nodo *crearNodo(int);

//Función Que inserta elementos en el arbol
void insertarNodo(Nodo *&,int);

//Función que muestra los elementos del arbol
void mostrarArbol(Nodo *, int);

//Función que Busca elementos en el Arbol
bool busqueda(Nodo *,int);

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
void mostrarArbol(Nodo *arbol, int contador){
	
	if( arbol == NULL ){//Comprobamos si el arbol esta vacío
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
bool busqueda(Nodo *arbol, int n){
	if( arbol == NULL ){//Comprueba si el arbol está vacío
		return false;
	}else if( arbol -> dato == n ){//Si el nodo es igual al elemento
		return true;
	}else if( n < arbol -> dato ){
		return busqueda( arbol -> izq, n );
	}else{
		return busqueda( arbol -> der, n );
	}
}



void Menu(){
	int dato,opc,contador = 0;
	
	do{
		std::cout << "\t.:MENU:." << "\n";
		std::cout << "1. Insertar un Nuevo Nodo" << "\n";
		std::cout << "2. Mostrar el Arbol Completo" << "\n";
		std::cout << "3. Buscar un Elemento en el Arbol " << "\n";
		std::cout << "4. Salir" << "\n";
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
			case 2:
				std::cout << "\nMostrando el Arbol Completo\n\n";
				mostrarArbol(arbol,contador); std::cout << "\n";
				system("pause");
			break;
			case 3:
				std::cout << "\nDigite el Elemento que Desea Buscar: ";std::cin >> dato;
				
				if( busqueda(arbol,dato) ){
					std::cout << "\nEl Elemento " << dato << " ha Sido Encontrado en el Arbol ";
				}else{
					std::cout << "\nEl Elemento No Existe en el Arbol ";
				}
					std::cout << "\n";
					system("pause");
				
			break;
			
			
		}
		system("cls");
	}while( opc != 4  );
	
}
