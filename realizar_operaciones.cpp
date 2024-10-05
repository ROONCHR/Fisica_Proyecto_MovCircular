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
        default:
            cout << "Opci�n no v�lida.\n";
    }
    system("pause");
}

