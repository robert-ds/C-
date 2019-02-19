#include <stdio.h>
#include <stdlib.h>

void sumaDosEnteros (int entero1, int entero2) {
    int resultado = 0;
    resultado = entero1 + entero2;
    printf("Si sumamos %d y %d obtenemos %d\n", entero1, entero2, resultado);
    return; // Ejemplos aprenderaprogramar.com
}

int main() {
    printf("Bienvenidos al programa\n");
    sumaDosEnteros(3,5);
    return 0;
}
