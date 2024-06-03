#include <stdio.h>
#include <math.h>

int main() {
    float numero1, numero2, diferencia, cuadrado;

    // Solicitar al usuario que ingrese dos n�meros
    printf("Ingrese el primer n�mero: ");
    scanf("%f", &numero1);
    printf("Ingrese el segundo n�mero: ");
    scanf("%f", &numero2);

    // Calcular la diferencia entre los dos n�meros
    diferencia = numero1 - numero2;

    // Calcular el cuadrado de la diferencia
    cuadrado = pow(diferencia, 2);

    // Mostrar el resultado
    printf("El cuadrado de la diferencia entre %.2f y %.2f es %.2f\n", numero1, numero2, cuadrado);

    return 0;
}
