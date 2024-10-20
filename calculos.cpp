#include "funciones.h"
#include <cmath>  // Para usar M_PI (valor de pi) y funciones matemáticas
using namespace std;
// Implementación de las funciones declaradas en funciones.h

// Funciones de operaciones y aplicación de fórmulas
float calcularVelocidadAngular(float frecuencia) {
    return 2 * PI * frecuencia;
}

float calcularVelocidadTangencial(float radio, float velocidadAngular) {
    return radio * velocidadAngular;
}

float calcularAceleracionCentripeta(float velocidadTangencial, float radio) {
    return (velocidadTangencial * velocidadTangencial) / radio;
}

float calcularFrecuencia(float n, float t){
	return n / t;
}
/////hhhhhh
double calcularVelocidadAngular(double angulo, double tiempo) {
    return angulo / tiempo;
}

double calcularPeriodo(double frecuencia) {
    return 1 / frecuencia;
}

double calcularPeriodoDesdeVelocidadAngular(double velocidadAngular) {
    return 2 * PI / velocidadAngular;
}

double calcularAceleracionCentripetaDesdeVelocidadAngular(double velocidadAngular, double radio) {
    return velocidadAngular * velocidadAngular * radio;
}
double calcularAceleracionTangencial(double variacionVelocidad, double variacionTiempo) {
    return variacionVelocidad / variacionTiempo;
}
double calcularAceleracionTotal(double aceleracionCentripeta, double aceleracionTangencial) {
    return sqrt(pow(aceleracionCentripeta, 2) + pow(aceleracionTangencial, 2));
}
double calcularVelocidadTangencial(double radio, double periodo) {
    return (2 * PI * radio) / periodo;
}

double calcularVelocidadTangencialDesdeFrecuencia(double radio, double frecuencia) {
    return 2 * PI * radio * frecuencia;
}

double calcularVelocidadTangencialDesdeVelocidadAngular(double radio, double velocidadAngular) {
    return radio * velocidadAngular;
}


