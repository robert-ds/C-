// Paso de Parametros por Referencia

#include <iostream>
#include <conio.h>

void valNuevo(int&, int&);

int main(){
	int a,b;
	
	std::cout << "Digite 2 numeros: ";
	std::cin >> a >> b;
	
	valNuevo(a,b)
	
	
	return 0;
}

void valNuevo(int& xa, int& yb){
	std::cout << "El valor del Primer numero es: " << xa << "\n";
	std::cout << "El valor del Segundo numero es: " << xb << "\n";
}
