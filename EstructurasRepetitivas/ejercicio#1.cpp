/* Digite un  numero, si el numero supera 10, multiplique los 10 primeros numeros, sino, sumelos */
#include <iostream>
#include <conio.h>

int main()
{
	int n;
	
	std::cout << "Digite un numero: ";
	std::cin >> n;
	
	if( n > 10 )
	{
		for(int m = 1; m >= 10 ; m++ )
		{
			m *= m;
			std::cout << m << "\n";
		}
		
	}else
	{
		for(int m = 1; m <= 10; m++)
		{
			m++;
			std::cout << m << "\n";
		}
	}
	
	getch();
	return 0;
}

