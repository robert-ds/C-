//Declaración de Punteros
/*
	8n = La dirección de n
	*n = La Variable que esta almacenada en n

*/
#include <iostream>
#include <conio.h>


int main(){
	int num,*dir_num;
	num = 20;
	dir_num = &num;
	
	std::cout << "El Numero es: " << *dir_num;
	std::cout << "\nLa direccion de memoria de la Variable es: " << dir_num;
	
	getch();
	return 0;
}
