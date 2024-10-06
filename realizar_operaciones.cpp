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
    cout << "4. Frecuencia\n";
    cout << "Elige una opción: ";
    cin >> opcion;

    switch(opcion) {
        case 1: {
        	cout<<"_________________________________________\n";
            float frecuencia;
            cout << "Ingresa la frecuencia (Hz): ";
            cin >> frecuencia;
            cout <<"Para calcular la velocidad angular mediante la formula:\n";
            frecuyvelangu();
            OPfrecuyvelangu(frecuencia);
            
            break;
        }
        case 2: {
        	cout<<"_________________________________________\n";
            float radio, frecuencia;
            cout << "Ingresa el radio (metros): ";
            cin >> radio;
            cout << "Ingresa la frecuencia (Hz): ";
            cin >> frecuencia;
            cout <<"Para calcular la velocidad tangencial mediante la formula:\n";
            veltang();
            OPveltang(radio,frecuencia);
            break;
        }
        case 3: {
        	cout<<"_________________________________________\n";
            float velocidadTangencial, radio;
            cout << "Ingresa la velocidad tangencial (m/s): ";
            cin >> velocidadTangencial;
            cout << "Ingresa el radio (metros): ";
            cin >> radio;
            acelcent();
            OPacelcent(velocidadTangencial, radio);
            
            break;
        }
        case 4: {
        	cout<<"_________________________________________\n";
            float revoluciones, tiempo;
            cout << "Ingresa el numero de revoluciones (unidades): ";
            cin >> revoluciones;
            cout << "Ingresa el tiempo (segundos): ";
            cin >> tiempo;
            frecu();
            OPfrecuencia(revoluciones, tiempo);
            
			break;
		}
        default:
            cout << "Opción no válida.\n";
    }
    system("pause");
}

