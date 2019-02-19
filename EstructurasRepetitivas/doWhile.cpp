/* Setencia do While */
#include <iostream>
#include <stdlib.h>

int main()
{
	int n = 1;
	
	do
	{
		std::cout << "Solo por esta vez: " << n;
		n++;	
	}while( n = 0 );
	
	system("pause");
	return 0;
}
