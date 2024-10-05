#include "funciones.h"
#include <cmath>  // Para usar M_PI (valor de pi) y funciones matem�ticas
using namespace std;
// Implementaci�n de las funciones declaradas en funciones.h

// Funciones de operaciones y aplicaci�n de f�rmulas
float calcularVelocidadAngular(float frecuencia) {
    return 2 * PI * frecuencia;
}

float calcularVelocidadTangencial(float radio, float velocidadAngular) {
    return radio * velocidadAngular;
}

float calcularAceleracionCentripeta(float velocidadTangencial, float radio) {
    return (velocidadTangencial * velocidadTangencial) / radio;
}

