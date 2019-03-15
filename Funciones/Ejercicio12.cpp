/*Ejercicio 12: Escriba una funcion nombrada calc_años que tenga un parametro entero que represente el numero total 
de días desde la fecha 1/1/2000==730031 y parametros de referencia nombrados años, mes y día. La función calcular el 
año, mes y día actual para el numero dado de dias que se le transmitan. Para este problema suponga que cada año tiene 
365 dias y cada mes tiene 30 dias */

#include <iostream> 
#include <conio.h>

void calc_año(int, int, int&, int&, int&);

int main(){
	int totaldias, añoUno = 730031, año, mes, dia;
	
	std::cout << "Digite el numero total de dias: ";
	std::cin >> totaldias;
	
	calc_año(totaldias,año,mes,dia);
	
	std::cout << "El numero de años por los dias ingresados son: " << año << "\n";
	std::cout << "El numero de meses por los dias ingresados son: " << mes << "\n";
	std::cout << "El numero de dias por los dias ingresados son: " << dia << "\n";
	
	getch();
	return 0;
}
void calc_año(int totaldias, int añoUno,  int& año, int& mes, int& dia){
	totaldias = totaldias + añoUno;
	año = totaldias / 365;
	totaldias %= 365;
	mes = totaldias / 30;
	dia = 	totaldias % mes; 
	
}
