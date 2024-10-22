#include <iostream>
#include <cmath>
#include "funciones.h"

using namespace std;

void formulario(){
	int opcion;
    char continuar = 's';

    cout << "\t\t\t\t\t\t\t------ FORMULARIO -------\n";
    while (continuar == 's' || continuar == 'S') {
        cout << "\t\t\t\t\t\t\t¿Qué fórmula quieres ver?\n";
        cout << "\t\t\t\t\t\t\t1. Velocidad angular\n";
        cout << "\t\t\t\t\t\t\t2. Frecuencia\n";
        cout << "\t\t\t\t\t\t\t3. Relación entre Frecuencia y Velocidad Angular\n";
        cout << "\t\t\t\t\t\t\t4. Periodo\n";
        cout << "\t\t\t\t\t\t\t5. Velocidad Lineal\n";
        cout << "\t\t\t\t\t\t\t6. Aceleración Centrípta\n";
        cout << "\t\t\t\t\t\t\t7. Aceleración Tangencial\n";
        cout << "\t\t\t\t\t\t\t8. Aceleración Total\n";
        cout << "\t\t\t\t\t\t\t9. Velocidad Tangencial\n";
        cout << "\t\t\t\t\t\t\t10. Salir\n";
        cout << "\t\t\t\t\t\t\tElige una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
				cout << "\t\t\t\t\t\t\t___________________________________\n";
                veloangu();
				cout << "\t\t\t\t\t\t\t___________________________________\n";
                break;
            case 2:
				cout << "\t\t\t\t\t\t\t___________________________________\n";
                frecu();
				cout << "\t\t\t\t\t\t\t___________________________________\n";
                break;
            case 3:
				cout << "\t\t\t\t\t\t\t___________________________________\n";
                frecuyvelangu();
				cout << "\t\t\t\t\t\t\t___________________________________\n";
                break;
            case 4:
				cout << "\t\t\t\t\t\t\t___________________________________\n";
                peri();
				cout << "\t\t\t\t\t\t\t___________________________________\n";
                break;
            case 5:
				cout << "\t\t\t\t\t\t\t___________________________________\n";
                vellin();
				cout << "\t\t\t\t\t\t\t___________________________________\n";
                break;
        	case 6:
				cout << "\t\t\t\t\t\t\t___________________________________\n";
        		acelcent();
				cout << "\t\t\t\t\t\t\t___________________________________\n";
                break;
			case 7:
				cout << "\t\t\t\t\t\t\t___________________________________\n";
        		aceltan();
				cout << "\t\t\t\t\t\t\t___________________________________\n";
                break;
			case 8:
				cout << "\t\t\t\t\t\t\t___________________________________\n";
        		aceltotal();
				cout << "\t\t\t\t\t\t\t___________________________________\n";
                break;
			case 9:
				cout << "\t\t\t\t\t\t\t___________________________________\n";
                veltang();
				cout << "\t\t\t\t\t\t\t___________________________________\n";
                break;
			case 10:
				cout << "\t\t\t\t\t\t\tSaliendo ...\n";
                continuar = 'n';
                break;				        
            default:
				cout << "\t\t\t\t\t\t\tOpción no válida.\n";
        }

        if (continuar != 'n') {
			cout << "\t\t\t\t\t\t\t\n¿Quieres continuar? (s/n): ";
            cin >> continuar;
        }
    }
}

