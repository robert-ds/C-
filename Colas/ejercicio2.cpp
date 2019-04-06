/*ejercicio 2: Hacer un programa que guarde datos de clientes de un banco, los almacene en cola, y 
por ultimo muestre los clientes en el orden correcto
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct Nodo{
	int edad;
	char nombre;
	char apellido;
	char direccion;
	char estadoCivil;
	char tipoCuenta;
	int montoDepositar;
	Nodo *siguiente;
};

//prototipos de Funciones
void insertarDatosClientes(Nodo *&,Nodo *&, int,char,char,char,char,char,int);
bool cola_vacia(Nodo *); 
void muestraDatosClientes(Nodo *&, Nodo *&, int &,char &,char &,char &,char &,char &,int &);
void Menu();
 
 //Función Principal
int main(){
	
	Menu();
	
	getch();
	return 0;
}
//funcion que Inserta los datos del usuario
void insertarDatosClientes(Nodo *&frente,Nodo *&fin, int edad,char nombre,char apellido,char direccion,char estadoCivil,char tipoCuenta,int montoDepositar){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo -> edad = edad;
	nuevo_nodo -> nombre = nombre;
	nuevo_nodo -> apellido = apellido;
	nuevo_nodo -> direccion = direccion;
	nuevo_nodo -> estadoCivil = estadoCivil;
	nuevo_nodo -> tipoCuenta = tipoCuenta;
	nuevo_nodo -> montoDepositar = montoDepositar;
	
	nuevo_nodo -> siguiente = NULL;
	//Comprobamos el estado de la cola y agregamos los datos donde corresponde
	if( cola_vacia(frente) ){
		frente = nuevo_nodo;
	}else{
		fin -> siguiente = nuevo_nodo;
	}
	
	fin = nuevo_nodo;
	
	std::cout << "\n\tLa Edad: " << edad << " Insertada Correctamente!";
	std::cout << "\n\tEl Nombre: " << nombre << " Insertado Correctamente!";
	std::cout << "\n\tEl Apellido: " << apellido << " Insertado Correctamente";
	std::cout << "\n\tLa Direccion: " << direccion << " Insertada Correctamente!";
	std::cout << "\n\tEl Estado Civil: " << estadoCivil << "Insertado Correctamente!";
	std::cout << "\n\tEl Tipo de Cuenta: " << tipoCuenta << " Insertado Correctamente!";
	std::cout << "\n\tEl Depositado de: " << montoDepositar << " Insertado Correctamente";
}
//Función que Comprueba el estado de la cola
bool cola_vacia(Nodo *frente){
	return ( frente == NULL )? true : false;
} 
void muestraDatosClientes(Nodo *&frente, Nodo *&fin, int &edad,char &nombre,char &apellido,char &direccion,char &estadoCivil,char &tipoCuenta,int &montoDepositar){
	edad = frente -> edad;	
	nombre = frente -> nombre;	
	apellido = frente -> apellido;	
	direccion = frente -> direccion;	
	estadoCivil = frente -> estadoCivil;	
	tipoCuenta = frente -> tipoCuenta;	
	montoDepositar = frente -> montoDepositar;	
	
	Nodo *aux = frente;
	
	if( frente == fin ){
		frente = NULL;
		fin = NULL;
	}else{
		frente = frente -> siguiente;
	}
	
	delete aux;
	
}
void Menu(){
	int opc;
	int edad;
	char nombre;
	char apellido;
	char direccion;
	char estadoCivil;
	char tipoCuenta;
	int montoDepositar;
	
	//Estado Inicial de la Cola
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	
	//Menú Iterativo e Interactivo que persiste hasta que el usuario lo Desee!
	do{
		std::cout << "\t\t.::MENU::."; 
		std::cout << "\n1. Insertar Datos del Cliente";
		std::cout << "\n2. Mostrar Datos de los Clientes";
		std::cout << "\n3. Salir";
		std::cout << "\n\t\t\tElija Una Opcion: ";
		std::cin >> opc;
		
		switch( opc ){
			case 1:
				std::cout << "\nIngrese la Edad: ";
				std::cin >> edad;
				
				std::cout << "\nIngrese el Nombre: ";
				std::cin >> nombre;
				
				std::cout << "\nIngrese el Apellido: ";
				std::cin >> apellido;
				
				std::cout << "\nIngrese la Direccion: ";
				std::cin >> direccion;
				
				std::cout << "\nIngrese el Estado Civil: ";
				std::cin >> estadoCivil;
				
				std::cout << "\nIngrese el Tipo de Cuenta: ";
				std::cin >> tipoCuenta;
				
				std::cout << "\nIngrese el Monto a Depositar: ";
				std::cin >> montoDepositar;
				
				insertarDatosClientes(frente,fin,edad,nombre,apellido,direccion,estadoCivil,tipoCuenta,montoDepositar);
				
			break;
			case 2:
				std::cout << "\n.::Mostrando Elementos de la Cola::.";
				
				while( frente != NULL ){
					muestraDatosClientes(frente,fin,edad,nombre,apellido,direccion,estadoCivil,tipoCuenta,montoDepositar);
					
					if( frente != NULL ){
						std::cout << edad << ", ";
						std::cout << nombre << ", ";
						std::cout << apellido << ", ";
						std::cout << direccion << ", ";
						std::cout << estadoCivil << ", ";
						std::cout << tipoCuenta << ", ";
						std::cout << montoDepositar;
					}else{
						std::cout << edad << ".";
						std::cout << nombre << ". ";
						std::cout << apellido << ".";
						std::cout << direccion << ".";
						std::cout << estadoCivil << ".";
						std::cout << tipoCuenta << ".";
						std::cout << montoDepositar << ".";
					}		
					
					system("pause");
				}
			break;
			case 3: break;			
		}
		system("cls");
		
		
	}while( opc != 3 );
	
}
