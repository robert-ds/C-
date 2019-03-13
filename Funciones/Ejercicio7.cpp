// Paso de Parametros por Referencia

#include <iostream>
#include <conio.h>

void valNuevo(int&, int&);

int main(){
	int a,b;
	
	std::cout << "Digite 2 numeros: ";
	std::cin >> a >> b;
	
	valNuevo(a,b);
	
	std::cout << "El valor del Primer Numero es: " << a;
	std::cout << "El valor del Segundo Numero es: " << b;
	
	getch();
	return 0;
}

void valNuevo(int& xa, int& yb){
	std::cout << "El valor del Primer numero es: " << xa << "\n";
	std::cout << "El valor del Segundo numero es: " << yb << "\n";
	
	xa = 20;
	yb = 23;
}
