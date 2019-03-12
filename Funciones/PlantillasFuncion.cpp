//Plantillas de Función

//Ejercicio: Sacar el valor absoluto de un numero

#include <iostream>
#include <conio.h>


//Prototipo de Función
template <class TIPOD>
void mostrarAbs(TIPOD numero);


int main(){
	int n1 = -4;
	float n2 = -56.67;
	double n3 = -123.8482;
	
	mostrarAbs(n1);
	mostrarAbs(n2);
	mostrarAbs(n3);
	getch();
	return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero){
	if(numero < 0){
		numero = numero * -1;
	}
	
	std::cout << "El Valor Absoluto del numero es: " << numero << endl;
}
