/*Recursividad

Factorial de un número 3! = 3*2*1

	factorial(n) = 1 				,Si n=0
				   n*factorial(n-1) ,Si n>0 	

*/

#include <iostream>
#include <conio.h>

int factorial(int);

int main(){
	
	std::cout << "Factorial: " << factorial(3) << "\n";
	
	
	getch();
	return 0;
}
int factorial(int n){
	
	if( n == 0){
		n = 1;
	}else{
		n = n * factorial(n-1);
	}
	return n;
}






