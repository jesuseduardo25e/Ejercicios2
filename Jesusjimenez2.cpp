#include <stdio.h>
#include <math.h>

int main() {
    float numero, cuadrado;

    // Solicitar al usuario que ingrese un n�mero
    printf("Ingrese un n�mero: ");
    scanf("%f", &numero);

    // Calcular el cuadrado del n�mero disminuido en 25
    cuadrado = pow(numero - 25, 2);

    // Mostrar el resultado
    printf("El cuadrado de %.2f disminuido en 25 es %.2f\n", numero, cuadrado);

    return 0;
}
