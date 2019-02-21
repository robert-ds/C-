/* Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copiar todo su contenido hacio otro arreglo de 
caracteres
 */
 
 #include <iostream>
 #include <conio.h>
 #include <string.h>
 
 int main()
 {
 	char cadena[30];
 	char cadena2[30];
 	
 	std::cout << "Digite una Cadena: ";
 	std::cin.getline(cadena,30,'\n');
 	
 	strcpy(cadena2,cadena);
 	
 	std::cout << "La cadena 2 es: " << cadena2;		
 	
 	getch();
 	return 0;
 }
