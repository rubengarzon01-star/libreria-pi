#ifndef LIBCOCOMO_H
#define LIBCOCOMO_H

double calcular_esfuerzo(double kloc, int tipo_proyecto);
double calcular_tiempo(double esfuerzo, int tipo_proyecto);
double calcular_personal(double esfuerzo, double tiempo);

#endif