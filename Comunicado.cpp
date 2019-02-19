#include <stdio.h>
#include <stdlib.h>

void saludo(); void comunicado(); void despedida();

int main() {
    printf("Comunicado de la empresa\n\n");
    saludo();     comunicado();     despedida();   return 0;
}

void saludo() {
    printf("Con motivo de la celebracion el proximo dia 5 del Dia Mundial del Medioambiente la empresa saluda a ");
    printf("todos los empleados y les agradece el compromiso con el cuidado de la naturaleza\n\n");  return;
}

void comunicado() {
    printf("Con motivo de dicha conmemoracion esta previsto realizar un acto de plantacion de arboles en los ");
    printf("jardines del edificio central el proximo dia 5 a las 12 del mediodia al que estan todos invitados\n\n");
    return; // Ejercicios resueltos aprenderaprogramar.com
}

void despedida() {
    printf("La empresa agradece su participacion y les invita a sumarse al programa <<Empleados por una ");
    printf("ciudad sostenible>>.\n\n Atentamente, El Director General\n\n");    return;
}
