#include <iostream>
#include <cmath>
#include "funciones.h"

using namespace std;

void realizarOperaciones() {
    int opcion;
    cout << "\t\t\t\t\t\t\t--- Cálculos de Movimiento Circular ---\n";
    cout << "\t\t\t\t\t\t\t¿Qué deseas calcular?\n";
    cout << "\t\t\t\t\t\t\t1. Calcular Velocidad Angular (frecuencia)\n";
    cout << "\t\t\t\t\t\t\t2. Calcular Velocidad Tangencial (radio y velocidad angular)\n";
    cout << "\t\t\t\t\t\t\t3. Calcular Aceleración Centrípta (velocidad tangencial y radio)\n";
    cout << "\t\t\t\t\t\t\t4. Calcular Frecuencia (número de revoluciones y tiempo)\n";
    cout << "\t\t\t\t\t\t\t5. Calcular Velocidad Angular (ángulo y tiempo)\n";
    cout << "\t\t\t\t\t\t\t6. Calcular Periodo desde frecuencia\n";
    cout << "\t\t\t\t\t\t\t7. Calcular Aceleración Centrípta desde velocidad angular\n";
    cout << "\t\t\t\t\t\t\t8. Calcular Aceleración Tangencial (variación de velocidad y tiempo)\n";
    cout << "\t\t\t\t\t\t\t9. Calcular Aceleración Total (centrípeta y tangencial)\n";
    cout << "\t\t\t\t\t\t\tElige una opción: ";
    cin >> opcion;

    switch(opcion) {
        case 1: {
            cout << "\t\t\t\t\t\t\t_________________________________________\n";
            float frecuencia;
            cout << "\t\t\t\t\t\t\tIngresa la frecuencia (Hz): ";
            cin >> frecuencia;
            cout << "\t\t\t\t\t\t\tPara calcular la velocidad angular mediante la formula:\n";
            frecuyvelangu();
            OPfrecuyvelangu(frecuencia);
            break;
        }
        case 2: {
            cout << "\t\t\t\t\t\t\t_________________________________________\n";
            float radio, frecuencia;
            cout << "\t\t\t\t\t\t\tIngresa el radio (metros): ";
            cin >> radio;
            cout << "\t\t\t\t\t\t\tIngresa la frecuencia (Hz): ";
            cin >> frecuencia;
            cout << "\t\t\t\t\t\t\tPara calcular la velocidad tangencial mediante la formula:\n";
            veltang();
            OPveltang(radio, frecuencia);
            break;
        }
        case 3: {
            cout << "\t\t\t\t\t\t\t_________________________________________\n";
            float velocidadTangencial, radio;
            cout << "\t\t\t\t\t\t\tIngresa la velocidad tangencial (m/s): ";
            cin >> velocidadTangencial;
            cout << "\t\t\t\t\t\t\tIngresa el radio (metros): ";
            cin >> radio;
            acelcent();
            OPacelcent(velocidadTangencial, radio);
            break;
        }
        case 4: {
            cout << "\t\t\t\t\t\t\t_________________________________________\n";
            float revoluciones, tiempo;
            cout << "\t\t\t\t\t\t\tIngresa el numero de revoluciones (unidades): ";
            cin >> revoluciones;
            cout << "\t\t\t\t\t\t\tIngresa el tiempo (segundos): ";
            cin >> tiempo;
            frecu();
            OPfrecuencia(revoluciones, tiempo);
            break;
        }
        case 5: {
            cout << "\t\t\t\t\t\t\t_________________________________________\n";
            double angulo, tiempo;
            cout << "\t\t\t\t\t\t\tIngresa el ángulo (rad): ";
            cin >> angulo;
            cout << "\t\t\t\t\t\t\tIngresa el tiempo (s): ";
            cin >> tiempo;
            OPvelangular(angulo, tiempo);
            break;
        }
        case 6: {
            cout << "\t\t\t\t\t\t\t_________________________________________\n";
            double frecuencia;
            cout << "\t\t\t\t\t\t\tIngresa la frecuencia (Hz): ";
            cin >> frecuencia;
            OPperiodo(frecuencia);
            break;
        }
        case 7: {
            cout << "\t\t\t\t\t\t\t_________________________________________\n";
            double velocidadAngular, radio;
            cout << "\t\t\t\t\t\t\tIngresa la velocidad angular (rad/s): ";
            cin >> velocidadAngular;
            cout << "\t\t\t\t\t\t\tIngresa el radio (m): ";
            cin >> radio;
            OPacelcent_angular(velocidadAngular, radio);
            break;
        }
        case 8: {
            cout << "\t\t\t\t\t\t\t_________________________________________\n";
            double variacionVelocidad, variacionTiempo;
            cout << "\t\t\t\t\t\t\tIngresa la variación de velocidad (m/s): ";
            cin >> variacionVelocidad;
            cout << "\t\t\t\t\t\t\tIngresa la variación de tiempo (s): ";
            cin >> variacionTiempo;
            OPacelTangencial(variacionVelocidad, variacionTiempo);
            break;
        }
        case 9: {
            cout << "\t\t\t\t\t\t\t_________________________________________\n";
            double aceleracionCentripeta, aceleracionTangencial;
            cout << "\t\t\t\t\t\t\tIngresa la aceleración centrípeta (m/s^2): ";
            cin >> aceleracionCentripeta;
            cout << "\t\t\t\t\t\t\tIngresa la aceleración tangencial (m/s^2): ";
            cin >> aceleracionTangencial;
            OPacelTotal(aceleracionCentripeta, aceleracionTangencial);
            break;
        }

        default:
            cout << "\t\t\t\t\t\t\tOpción no válida.\n";
    }
    system("pause");
}

