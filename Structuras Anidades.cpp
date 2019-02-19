#include <iostream>
#include <conio.h>

struct info_direccion{
	char direccion[30];
	char ciudad[20];
	char provincia[20];
} info_direccion1 = {"Pozuelo","Lecheria","Anzoategui"};

struct empleado{
	char nombre[20];
	struct info_direccion dir_empleado;
	double salario;	
} empleado = {"Robert",300.6584};

int main(){
	std::cout << empleado.nombre << ", ";
	std::cout << empleado.dir_empleado.direccion << ", ";
	std::cout << empleado.dir_empleado.ciudad << ", ";
	std::cout << empleado.dir_empleado.provincia << ", ";
	std::cout << empleado.salario;
}


