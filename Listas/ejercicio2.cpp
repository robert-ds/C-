//Ejercicio 2: Crear una lista que almacene "n" números reales y calcular su suma y promedio de estos.

#include <iostream>
#include <conio.h>
#include <string.h>

struct Nodo{
	float dato;
	Nodo *siguiente;
};

//Funcion que inserta elementos en la lista
void insertaElementos(Nodo *&, int);

//Funcion  que muestra los elementos de la lista
void muestraElementosLista(Nodo *);

//Funcion que calcula Suma y promedio
void calculaSumaPromedio(Nodo *);

int main(){
	Nodo *lista = NULL;
	float dato;
	char respuesta;
	
	do{
		std::cout << "Digite Un Numero Real: ";
		std::cin >> dato;
		
		insertaElementos(lista,dato);
		
		std::cout << "Desea Agregar Otro numero(s/n): ";
		std::cin >> respuesta;
		
	}while( respuesta == 's' || respuesta == 'S' );
	
	std::cout << "\nLos Numero Ingresados Son: \n";
	muestraElementosLista(lista);
	
	
	getch();
	return 0;
}
void insertaElementos(Nodo *&lista, int n){
	Nodo *new_nodo = new Nodo();
	Nodo *aux;
	
	new_nodo -> dato = n;
	new_nodo -> siguiente = NULL;
	
	//Comprobamos Si la Lista esta Vacia
	if( lista == NULL ){
		lista = new_nodo;//Si la condición se cumple Agregamos el elemento ingresado por el usuario a la lista	
	}else
	{
		aux = lista;//aux apunta o toma el valor al inicio de la lista
		
		//comprobamos que el aux que sigue no este vacio, osea no sea NULL
		while( aux -> siguiente != NULL ){
			aux = aux -> siguiente; // avanzamos en la lista y le asignamos ese valor a aux
		}
		
		aux -> siguiente = new_nodo;//Creamos y asignamos el nuevo valor a la lista
	}
	
	std::cout << "\tEl Elemento " << n << " Fue Agregado a la Lista!\n";
	
}
void muestraElementosLista(Nodo *lista){
	while( lista != NULL){//Mientras Alla elementos en la lista
		int incre = 1;
		std::cout << "\nDato " << incre++ << ": " << lista -> dato;
		lista = lista -> siguiente;//Avanzamos en la lista
	}
	
}
void calculaSumaPromedio(Nodo *lista){
	float suma = 0, promedio;
	int nElementos = 1;
	
	while( lista != NULL ){//Comprobamos que la lista tenga datos o valores
		suma = (lista -> dato) + (lista -> siguiente;
		std::cout << "\nLa Suma de los Elementos es: " << suma;
		nElementos++;
	}
	
	promedio = suma / nElementos;
	std::cout << "\nEl Promedio de los Elementos que digito es: " << promedio;
	
	
}
