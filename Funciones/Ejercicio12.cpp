/*Ejercicio 12: Escriba una funcion nombrada calc_a�os que tenga un parametro entero que represente el numero total 
de d�as desde la fecha 1/1/2000==730031 y parametros de referencia nombrados a�os, mes y d�a. La funci�n calcular el 
a�o, mes y d�a actual para el numero dado de dias que se le transmitan. Para este problema suponga que cada a�o tiene 
365 dias y cada mes tiene 30 dias */

#include <iostream> 
#include <conio.h>

void calc_a�o(int, int, int&, int&, int&);

int main(){
	int totaldias, a�oUno = 730031, a�o, mes, dia;
	
	std::cout << "Digite el numero total de dias: ";
	std::cin >> totaldias;
	
	calc_a�o(totaldias,a�o,mes,dia);
	
	std::cout << "El numero de a�os por los dias ingresados son: " << a�o << "\n";
	std::cout << "El numero de meses por los dias ingresados son: " << mes << "\n";
	std::cout << "El numero de dias por los dias ingresados son: " << dia << "\n";
	
	getch();
	return 0;
}
void calc_a�o(int totaldias, int a�oUno,  int& a�o, int& mes, int& dia){
	totaldias = totaldias + a�oUno;
	a�o = totaldias / 365;
	totaldias %= 365;
	mes = totaldias / 30;
	dia = 	totaldias % mes; 
	
}
