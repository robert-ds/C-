/* Escribe un Programa que lea de la Entrada estándar un vector de números y muestre en la salida estandar los números
del vector con sus indices asociados
 */
 #include <iostream>
 #include <conio.h>
 
 int main(){
 	int n[100],a;
 	
 	std::cout << "Digite el número de elementos del vector: ";
 	std::cin >> a;
 	
 	for(int i = 0; i < a; i++)
	 {
	 	std::cout << "Digite un numero: ";
	 	std::cin >> n[i];
	 }
	 
	//Mostrar indice con su valor asociado
	
	for(int i = 0; i < a; i++)
	{
		std::cout << i << " -> " << n[i] << "\n";
	}  	
 	
 	getch();
 	return 0;
 }
