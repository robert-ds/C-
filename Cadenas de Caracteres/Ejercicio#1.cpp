/* Hacer un programa que pida al usuario que digite una cadena de caracteres, luego verificar la longitud de la cadena, y si esta
supera a 10 caracteres mostrarla en pantalla, caso contrario no mostrarla
 */
 
 #include <iostream>
 #include <conio.h>
 #include <string.h>
 
 int main()
 {
 	char cadena[40];
 	int lon;
 	
 	std::cout << "Digite una Cadena: ";
 	std::cin.getline(cadena,40,'\n');
 	
 	lon = strlen(cadena);
 	
 	if( lon > 10)
	 {
	 	std::cout << "La cadena es: " << cadena;
	 }	
 	 	
 	getch();
 	return 0;
 }
