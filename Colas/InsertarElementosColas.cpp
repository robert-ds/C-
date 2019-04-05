//Insertar Elementos en una Cola

#include <iostream> 
#include <conio.h>
#include <stdlib.h>

//Estructura o nodo
struct Nodo{
	int dato;
	Nodo *siguiente;
}; 

//Prototipo de la Función Insertará en la cola
void insertarCola(Nodo *&, Nodo *&, int);
bool cola_vacia(Nodo *);

int main(){
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	
	int dato;
	
	std::cout << "Digite un numero: ";
	std::cin >> dato;
	insertarCola(frente,fin,dato);
	
	std::cout << "\nDigite un numero: ";
	std::cin >> dato;
	insertarCola(frente,fin,dato);
	
	std::cout << "\nDigite un numero: ";
	std::cin >> dato;
	insertarCola(frente,fin,dato);
	
	
	
	getch();
	return 0;
}

//Función que Inserta Elementos en la cola
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
	
	std::cout << "\n\tElemento " << n << " Insertado Correctamente a la cola!";
	
}

//Función que verifica si la cola esta vacia
bool cola_vacia(Nodo *frente){
	return ( frente == NULL )? true : false;//Estructura de control simplificada
	
	//Estructura de control Estandar
	/*if( frente == NULL ){
		return true;
	}else{
		return false;
	}*/
}

