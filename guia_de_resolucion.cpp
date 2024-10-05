#include <iostream>
#include <cmath>
#include "funciones.h"


using namespace std;

// Guía de resolución de problemas tipo
void guiaResolucionProblemas() {
    cout << "\n--- Guía de Resolución de Problemas Tipo ---\n";
    cout << "Vamos a resolver un problema de forma guiada.\n";
    cout << "Problema: Un objeto con radio de 3 metros gira con una frecuencia de 4 Hz. \n";
    cout << "Paso 1: Calculamos la velocidad angular (?).\n";
    float frecuencia = 4.0;
    float radio = 3.0;
    float velocidadAngular = calcularVelocidadAngular(frecuencia);
    cout << "? = 2 * p * 4 = " << velocidadAngular << " rad/s\n";
    
    cout << "Paso 2: Calculamos la velocidad tangencial (v).\n";
    float velocidadTangencial = calcularVelocidadTangencial(radio, velocidadAngular);
    cout << "v = " << velocidadAngular << " * " << radio << " = " << velocidadTangencial << " m/s\n";
    
    cout << "Paso 3: Calculamos la aceleración centrípeta (a).\n";
    float aceleracionCentripeta = calcularAceleracionCentripeta(velocidadTangencial, radio);
    cout << "a = (v^2) / r = (" << velocidadTangencial << "^2) / " << radio << " = " << aceleracionCentripeta << " m/s²\n";
    cout << "--------------------------------------\n";
}
