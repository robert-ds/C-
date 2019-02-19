/* Escribe un Programa que defina un vector de numeros y muestre en la salida estandar el vector en orden inverso
del ultimo al primer vector
 */
 
 #include <iostream>
 #include <conio.h>
 
 int main()
 {
 	int v[20] = {2,8,9,5,6};
 	
 	for(int i = 5; i <= 0;i--)
	 {
	 	std::cout << "Inversa del Vector: " << v[i];
	 }
 	
 	
 	getch();
 	return 0;
 }
