/* Digite hacer un arbol '*' del tipo ejemplo
Digite el numero de filas
*
**
***
****
*****
******

 */
 
 #include <iostream>
 #include <conio.h>
 
 int main()
{
	int n;
	
	std::cout << "Digite el numero de filas: ";
	std::cin >> n;
	
	for(int m = 1; m <= n; m++ )
	{
		char s[] = "*";
		
		std::cout << s ;
		
		
	}	
	
	getch();
	return 0;
} 
