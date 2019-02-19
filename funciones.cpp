#include <stdio.h>
#include <stdlib.h>

int sumaDosEnteros (int entero1, int entero2) {
    int resultado = 0;
    resultado = entero1 + entero2;
    return resultado;
}

int main() {
    printf("Bienvenidos al programa\n");
    printf("Si sumamos tres y cinco obtenemos %d\n", sumaDosEnteros(3,5));
    return 0; // Ejemplos aprenderaprogramar.com
}
 
