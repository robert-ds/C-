/* Selecionar un tipo de vehiculo e indicar el peaje según un valor númerico

1- turismo,peaje $500.
2- autobus,peaje $3000.
3- motocicleta,peaje $300.

 */
 
 #include <iostream>
 
 int main()
 {
 	int select;
 	
 	//"heredoc"
 	std::cout <<
 	"Selecione el tipo de vehiculo en el que se desplaza:\n"
 		"\t1.Deportivo\n"
 		"\t2.Autobus\n"
 		"\t3.Motocicleta\n";
 	std::cin >> select;
 	
 	switch(select){
 		case 1:
 			std::cout << "\n\t::El Peaje que debe pagar es $500::";
 			break;
 		
		case 2:
			std::cout << "\n\t::El Peaje que debe pagar es $3000::";
			break;
		
		case 3:
			std::cout << "\n\t::El Peaje que debe pagar es $300::";
			break;
		
		default:
			std::cout << "\n\t::Selecion incorrecta!::";
			break;		 	
 		
	 }
	 	
 		
	 
	 return 0;
 }
