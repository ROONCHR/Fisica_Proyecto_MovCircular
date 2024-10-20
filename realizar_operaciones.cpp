#include <iostream>
#include <cmath>
#include "funciones.h"


using namespace std;

void realizarOperaciones() {
    int opcion;
    cout << "\n--- Cálculos de Movimiento Circular ---\n";
    cout << "¿Qué deseas calcular?\n";
    cout << "1. Calcular Velocidad Angular (frecuencia)\n";
    cout << "2. Calcular Velocidad Tangencial (radio y velocidad angular)\n";
    cout << "3. Calcular Aceleración Centrípta (velocidad tangencial y radio)\n";
    cout << "4. Calcular Frecuencia (número de revoluciones y tiempo)\n";
    cout << "5. Calcular Velocidad Angular (ángulo y tiempo)\n";
    cout << "6. Calcular Periodo desde frecuencia\n";
    cout << "7. Calcular Aceleración Centrípta desde velocidad angular\n";
    cout << "8. Calcular Aceleración Tangencial (variación de velocidad y tiempo)\n";
    cout << "9. Calcular Aceleración Total (centrípeta y tangencial)\n";
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
		}case 5: {
			cout<<"_________________________________________\n";
            double angulo, tiempo;
            cout << "Ingresa el ángulo (rad): ";
            cin >> angulo;
            cout << "Ingresa el tiempo (s): ";
            cin >> tiempo;
            OPvelangular(angulo, tiempo);
            
            break;
        }
        case 6: {
        	cout<<"_________________________________________\n";
            double frecuencia;
            cout << "Ingresa la frecuencia (Hz): ";
            cin >> frecuencia;
            OPperiodo( frecuencia);
            break;
        }
        case 7: {
        	cout<<"_________________________________________\n";
            double velocidadAngular, radio;
            cout << "Ingresa la velocidad angular (rad/s): ";
            cin >> velocidadAngular;
            cout << "Ingresa el radio (m): ";
            cin >> radio;
            OPacelcent_angular(velocidadAngular, radio);
            break;
        }
        case 8: {
        	cout<<"_________________________________________\n";
            double variacionVelocidad, variacionTiempo;
            cout << "Ingresa la variación de velocidad (m/s): ";
            cin >> variacionVelocidad;
            cout << "Ingresa la variación de tiempo (s): ";
            cin >> variacionTiempo;
            OPacelTangencial(variacionVelocidad, variacionTiempo);
            break;
        }
        case 9: {
        	cout<<"_________________________________________\n";
            double aceleracionCentripeta, aceleracionTangencial;
            cout << "Ingresa la aceleración centrípeta (m/s^2): ";
            cin >> aceleracionCentripeta;
            cout << "Ingresa la aceleración tangencial (m/s^2): ";
            cin >> aceleracionTangencial;
            OPacelTotal( aceleracionCentripeta,aceleracionTangencial);
            break;
        }

        default:
            cout << "Opción no válida.\n";
    }
    system("pause");
}

