#include <math.h>
#include "cocomo.h"

double calcular_esfuerzo(double kloc, int tipo_proyecto)
{
    double a, b;

    if(tipo_proyecto == 0)
    {
        a = 2.4;
        b = 1.05;
    }
    else if(tipo_proyecto == 1)
    {
        a = 3.0;
        b = 1.12;
    }
    else
    {
        a = 3.6;
        b = 1.20;
    }

    return a * pow(kloc, b);
}
double calcular_tiempo(double esfuerzo, int tipo_proyecto)
{
    double c = 2.5;
    double d;

    if(tipo_proyecto == 0)
    {
        d = 0.38;
    }
    else if(tipo_proyecto == 1)
    {
        d = 0.35;
    }
    else
    {
        d = 0.32;
    }

    return c * pow(esfuerzo, d);
}

double calcular_personal(double esfuerzo, double tiempo)
{
    return esfuerzo / tiempo;
}