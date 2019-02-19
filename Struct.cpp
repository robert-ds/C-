#include <stdio.h>

struct persona {
	char nombre[20];
	int edad;
}
persona1, persona2;

//persona1 = {"Robert",20}, persona2{"Andres",24};

int main()
{
	printf("Digite su Nombre: ");
	gets(persona1.nombre);
	printf("Digite su edad: ");
	scanf("%d",&persona1.edad);
	
	printf("Su nombre es %s ", persona1.nombre);
	printf("Su edad es %d\n\n", persona1.edad);
	
/*	printf("Su Nombre es %s ", persona2.nombre);
	printf("Su edad es %d ", persona2.edad); */
	
	return 0;
}
