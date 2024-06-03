#include <stdio.h>
#include <math.h>

int main() {
    float numero, cuadrado;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%f", &numero);

    // Calcular el cuadrado del número disminuido en 25
    cuadrado = pow(numero - 25, 2);

    // Mostrar el resultado
    printf("El cuadrado de %.2f disminuido en 25 es %.2f\n", numero, cuadrado);

    return 0;
}
