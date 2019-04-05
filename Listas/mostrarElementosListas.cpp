//Mostrar Elementos de la Lista

#include <iostream>
#include <conio.h>
#include <stdlib.h>

//Estructura Principal
struct Nodo{
	int dato;
	Nodo *siguiente;
};

//Prototipos de Funciones
void Menu();
void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);

//Variables Global
Nodo *lista = NULL;

int main(){
	
	Menu();
	
	
	
	getch();
	return 0;
}

//Función que inserta elementos en la lista
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
//Muestra Todos los Elementos de la Lista
void mostrarLista(Nodo *lista){
	Nodo *actual = new Nodo();
	actual = lista;
	
	while( actual != NULL ){
		std::cout << actual -> dato << " -> ";
		actual = actual -> siguiente;
	}
	
}

void Menu(){
	int opc,dato;
	
	do{
		std::cout << "\t\t.::MENU::.\n";
		std::cout << "1. Insertar Elemetos en la Lista\n";
		std::cout << "2. Mostar Elelentos de la Lista\n";
		std::cout << "3. Salir\n";
		std::cout << "\tElija una Opcion: ";
		std::cin >> opc;
		
		switch(opc){
			case 1: 
				std::cout << "\nDigite un Numero: ";
				std::cin >> dato;
	 			insertarLista(lista,dato);
	 			system("pause");
			break;
			
			case 2: 
				mostrarLista(lista);
				std::cout << "\n";
				system("pause");
			break;
			
			case 3: break;
		}
		system("cls");
		
	}while( opc != 3 );
	
	if( opc == 3 ){
		std::cout << "Hasta Pronto, Espero vuelvas!.\n";
		std::cout << "Presiona Cualquier tecla para Salir!";
	}
	
}
