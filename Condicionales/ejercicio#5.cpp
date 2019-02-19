/* Dada una nota de un examen mediante un codigo escribir el literal que le correponde a la nota
	A - Excelente
	B - Notable
	C - Aprobado
	D y F - Reprobado 
 */
 
 #include <iostream>
 
 int main()
 {
 	int nota;
 	
 	std::cout << "Digite la nota que obtuvo en el examen: ";
 	std::cin >> nota;
 	
 	switch(nota){
 		case  1-9:
 			std::cout << "La nota que obtuvo es D y F: Reprobado";
 			break;
 		
 		
	 }
 	
 	
 	return 0;
 }
