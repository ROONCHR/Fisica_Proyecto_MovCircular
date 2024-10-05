#include <iostream>
#include <cmath>
#include "funciones.h"


using namespace std;

void realizarOperaciones() {
    int opcion;
    cout << "\n--- C�lculos de Movimiento Circular ---\n";
    cout << "�Qu� deseas calcular?\n";
    cout << "1. Velocidad Angular\n";
    cout << "2. Velocidad Tangencial\n";
    cout << "3. Aceleraci�n Centr�pta\n";
    cout << "Elige una opci�n: ";
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
            cout << "La aceleraci�n centr�peta es: " << aceleracionCentripeta << " m/s�.\n";
            break;
        }
        default:
            cout << "Opci�n no v�lida.\n";
    }
}

