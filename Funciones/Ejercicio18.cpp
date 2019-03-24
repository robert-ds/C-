/*Ejercicio 18: Suma de Números Complejos

z1 = 5-3i , z2 = -4+2i

z1 + z2 = (5-3i)+(-4+2i)
        =5-3i-4+2i
        =1-i
*/

#include <iostream>
#include <conio.h>

struct complejo{
	float real,imaginaria;
}z1,z2;

void pedirDatos();
complejo suma(complejo,complejo);
void muestra(complejo);

int main(){
	pedirDatos();
	
	complejo x = suma(z1,z2);
	
	muestra(x);
	
	
	getch();
	return 0;
}
void pedirDatos(){
	std::cout << "Digite los Datos para el Primer Número Complejo: \n";
	std::cout << "Parte Real: "; std::cin >> z1.real;
	std::cout << "\nParte Imaginaria: "; std::cin >>z1.imaginaria;
	
	std::cout << "\nDigite los Datos para el Segundo Número Complejo: \n";
	std::cout << "Parte Real: "; std::cin >> z2.real;
	std::cout << "\nParte Imaginaria: "; std::cin >>z2.imaginaria;
}
complejo suma(complejo z1,complejo z2){
	z1.real += z2.real;
	z1.imaginaria += z2.imaginaria;
	
	return z1;
}
void muestra(complejo x){
	std::cout << "\n Resultado de la Suma: "  << x.real << " , " << x.imaginaria << "\n";
}







