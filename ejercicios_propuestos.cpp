#include <iostream>
#include <cmath>
#include "funciones.h"


using namespace std;

// Funciones de ejercicios propuestos
void ejerciciosPropuestos() {
    cout << "\n--- Ejercicios Propuestos ---\n";
    cout << "1. Un objeto gira con una frecuencia de 5 Hz en una trayectoria circular de 2 metros de radio.\n";
    cout << "   ¿Cuál es su velocidad angular?\n";
    cout << "   a) 31.41 rad/s\n";
    cout << "   b) 12.56 rad/s\n";
    cout << "   c) 62.83 rad/s\n";
    cout << "Elige la respuesta correcta: ";
    char respuesta;
    cin >> respuesta;

    if (respuesta == 'b' || respuesta == 'B') {
        cout << "¡Correcto! La velocidad angular es 31.41 rad/s.\n";
    } else {
        cout << "Incorrecto. La respuesta correcta es 31.41 rad/s.\n";
    }
    cout << "--------------------------------------\n";
}

