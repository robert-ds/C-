//Buscar los elementos de la Lista

#include <iostream>
#include <conio.h>
#include <stdlib.h>

struct Nodo{
	int dato;
	Nodo *siguiente;	
};

//Prototipos de Funciones
void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void eliminarNodo(Nodo *&, int);
void Menu();

//variable Global de la Lista
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

//Función Elimina Nodo o elemento de la Lista
void eliminarNodo(Nodo *&lista, int n){
	//Preguntar si la lista no esta vacia!
	if( lista != NULL ){
		Nodo *aux_borrar;
		Nodo *anterior = NULL;
		aux_borrar = lista;
	
	 	//Recorremos la Lista
		while( ( aux_borrar != NULL ) && (aux_borrar -> dato != n)  ){
			anterior = aux_borrar;
			aux_borrar = aux_borrar -> siguiente;
		}
		
		//Elemento No encontrado
		if( aux_borrar == NULL ){
			std::cout << "El Elemento no existe\n";
		}
		//Primer Elemento es el que vamos a eliminar
		else if( anterior == NULL ){
			lista = lista -> siguiente;
			delete aux_borrar;
			std::cout << "\nEl elemento " << n << " fue eliminado de la lista\n";
		}
		//El elemento esta en la lista pero, no es el primero
		else{
			anterior -> siguiente = aux_borrar -> siguiente;
			delete aux_borrar;
			std::cout << "\nEl elemento " << n << " fue eliminado de la lista\n";
		}
		
    }else{
    	std::cout << "\nLa lista Esta Vacia!, Por tanto No hay Nada que eliminar\n";	
	}
}

//Menu Interactivo
void Menu(){

int opc,dato;
	
	do{
		std::cout << "\t\t.::MENU::.\n";
		std::cout << "1. Insertar Elemetos en la Lista\n";
		std::cout << "2. Mostar Elementos de la Lista\n";
		std::cout << "3. Eliminar Elementos de la Lista\n";
		std::cout << "4. Salir\n";
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
			
			case 3:
				std::cout << "\nDigite un Numero: ";
				std::cin >> dato;
				eliminarNodo(lista,dato);
				system("Pause");
				
				
			break;
			case 4: break;
		}
		system("cls");
		
	}while( opc != 4 );
	
	if( opc == 4 ){
		std::cout << ".:::::::Hasta Pronto, Espero vuelvas!:::::::.\n\n";
		std::cout << "Presiona Cualquier tecla para Salir!";
	}
	
}
