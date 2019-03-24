/* Escriba una funcion en C++ llamada mayor() que devuelva la fecha más reciente de cualquier par de fechas que se le transmitan. Por Ejemplo,
si se transmiten las fechas 10/9/2005 y 11/3/2015 a mayor(), será devuelta la segunda fecha.
*/

#include <iostream>
#include <conio.h>

struct fecha{
	int dia,mes,ano;
}f1,f2;

void pedirFechas();
int mayor(fecha,fecha);

int main(){
	
	pedirFechas();
	
	mayor(f1,f2);
	
	
	
	getch(); 
	return 0;
}
void pedirFechas(){
	std::cout << "Digite la Primera fecha: \n";
	std::cout << "Dia: "; std::cin >> f1.dia;
	std::cout << "\nMes: "; std::cin >> f1.mes;
	std::cout << "\nAno: "; std::cin >> f1.ano;
	
	std::cout << "\nDigite la Segunda fecha: \n";
	std::cout << "Dia: "; std::cin >> f2.dia;
	std::cout << "\nMes: "; std::cin >> f2.mes;
	std::cout << "\nAno: "; std::cin >> f2.ano;
}
int mayor(fecha f1,fecha f2){
	
	if( f1.ano > f2.ano ){
		std::cout << "La Fecha Mayor es: " << std::cout << f1.dia << "/" << f1.mes << "/" << f1.ano;	
	}else{
		std::cout << "La Fecha Mayor es: " << std::cout << f2.dia << "/" << f2.mes << "/" << f2.ano;	
	}
	
}










