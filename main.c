#include <stdio.h>
#include "cocomo.h"

int main(void)
{
    double kloc;
    double esfuerzo;
    double tiempo;
    double personal;
    int tipo_proyecto;

    printf("Estimador COCOMO Basico\n\n");

    printf("Tipos de proyecto:\n");
    printf("0 - Organico\n");
    printf("1 - Semi-acoplado\n");
    printf("2 - Rigido\n\n");

    printf("Seleccione el tipo de proyecto: ");
    scanf("%d", &tipo_proyecto);

    printf("Ingrese el tamano del proyecto (KLOC): ");
    scanf("%lf", &kloc);

    esfuerzo = calcular_esfuerzo(kloc, tipo_proyecto);
    tiempo = calcular_tiempo(esfuerzo, tipo_proyecto);
    personal = calcular_personal(esfuerzo, tiempo);

    printf("\n===== RESULTADOS =====\n");
    printf("Esfuerzo: %.2lf Person-Months\n", esfuerzo);
    printf("Tiempo de desarrollo: %.2lf meses\n", tiempo);
    printf("Personal promedio: %.2lf personas\n", personal);

    return 0;
}