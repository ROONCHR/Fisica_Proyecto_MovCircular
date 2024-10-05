#include <iostream>
#include <cmath>
#include "funciones.h"


using namespace std;

void realizarOperaciones() {
    int opcion;
    cout << "\n--- Cálculos de Movimiento Circular ---\n";
    cout << "¿Qué deseas calcular?\n";
    cout << "1. Velocidad Angular\n";
    cout << "2. Velocidad Tangencial\n";
    cout << "3. Aceleración Centrípta\n";
    cout << "Elige una opción: ";
    cin >> opcion;

    switch(opcion) {
        case 1: {
            float frecuencia;
            cout << "Ingresa la frecuencia (Hz): ";
            cin >> frecuencia;
            float velocidadAngular = calcularVelocidadAngular(frecuencia);
            cout << "La velocidad angular es: " << velocidadAngular << " rad/s.\n";
            break;
        }
        case 2: {
            float radio, frecuencia;
            cout << "Ingresa el radio (metros): ";
            cin >> radio;
            cout << "Ingresa la frecuencia (Hz): ";
            cin >> frecuencia;
            float velocidadAngular = calcularVelocidadAngular(frecuencia);
            float velocidadTangencial = calcularVelocidadTangencial(radio, velocidadAngular);
            cout << "La velocidad tangencial es: " << velocidadTangencial << " m/s.\n";
            break;
        }
        case 3: {
            float velocidadTangencial, radio;
            cout << "Ingresa la velocidad tangencial (m/s): ";
            cin >> velocidadTangencial;
            cout << "Ingresa el radio (metros): ";
            cin >> radio;
            float aceleracionCentripeta = calcularAceleracionCentripeta(velocidadTangencial, radio);
            cout << "La aceleración centrípeta es: " << aceleracionCentripeta << " m/s².\n";
            break;
        }
        default:
            cout << "Opción no válida.\n";
    }
}

