#include <stdio.h>
#include <math.h>

int main() {
    float numero1, numero2, diferencia, cuadrado;

    // Solicitar al usuario que ingrese dos números
    printf("Ingrese el primer número: ");
    scanf("%f", &numero1);
    printf("Ingrese el segundo número: ");
    scanf("%f", &numero2);

    // Calcular la diferencia entre los dos números
    diferencia = numero1 - numero2;

    // Calcular el cuadrado de la diferencia
    cuadrado = pow(diferencia, 2);

    // Mostrar el resultado
    printf("El cuadrado de la diferencia entre %.2f y %.2f es %.2f\n", numero1, numero2, cuadrado);

    return 0;
}
