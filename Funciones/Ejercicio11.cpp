/* Ejercicio11: Escriba una funcion nombrada tiempo() que tenga un parametro en numero entero llamado totalseg y tres
parametros de referencia enteros nombrados horas, min, seg. La funcion es convertir el numero de segundos transmitidos
en un numero equivalente de horas, minutos y segundos */

#include <iostream>
#include <conio.h>

void tiempo( int, int&, int&, int& );

int main(){
	int totalseg, horas, min, seg;
	
	std::cout << "Digite el numero total de segundos: ";
	std::cin >> totalseg;
	
	tiempo(totalseg,horas,min,seg);
	
	std::cout << "\nTiempo equivalente a la cantidad de segundos Digitados: \n";
	std::cout << "Horas: " << horas << "\n";
	std::cout << "Minutos: " << min << "\n";
	std::cout << "Segundos: " << seg << "\n";
	
	getch();
	return 0;
}

void tiempo( int totalseg, int& horas, int& min, int& seg ){
	horas = totalseg/3600;
	totalseg %= 3600;
	min = totalseg/60;
	seg = totalseg % 60;

}


