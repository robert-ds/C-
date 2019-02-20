/* Realiza un programa que defina dos vectores de caracteres y despues almacene el contenido de ambos vectores en un nuevo vector
, situando en primer lugar lo elementos del primer vector, seguido por los elementos del segundo vector. Muestre el contenido del 
nuevo vector en la salida estandar.
 */
 #include <iostream>
 #include <conio.h>
 
 int main(){
 	char x[] = {'a','e','i','o','u'};
 	char y[] = {'A','B','C','D','E'};
 	char z[10];
 	
 	//Copiando los elemntos x[] a z[]
 	
 	for(int i = 0;i < 5; i++){ 
 		z[i] = x[i];
	 }
	 
 	//Copiando los elemntos y[] a z[]
 	
 	for(int i = 5;i < 10; i++)
	 {
	 	z[i] = y[i-5];
	 }
	 
	for(int i = 0;i < 10; i++){
	
 	std::cout << z[i] << std::endl; 
 	
	} 
 	
 	getch();
 	return 0;
 }
