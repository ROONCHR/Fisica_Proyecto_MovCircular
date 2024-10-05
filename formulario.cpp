#include <iostream>
#include <cmath>
#include "funciones.h"

using namespace std;

void formulario(){
	int opcion;
    char continuar = 's';

    cout << "------ FORMULARIO -------\n";
    while (continuar == 's' || continuar == 'S') {
        cout << "\n¿Qué formula quieres ver?\n";
        cout << "1. Velocidad angular\n";
        cout << "2. Frecuencia\n";
        cout << "3. Relacion entre Frecuencia y velocidad angular\n";
        cout << "4. Periodo\n";
        cout << "5. Velocidad lineal\n";
        cout << "6. Aceleracion centripeta\n";
        cout << "7. Aceleracion tangencial\n";
        cout << "8. Aceleracion total\n";
        cout << "9. Velocidad tangencial\n";
        cout << "10. Salir\n";
        cout << "Elige una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
            	cout<<"___________________________________\n";
                veloangu();
                cout<<"___________________________________\n";
                break;
            case 2:
            	cout<<"___________________________________\n";
                frecu();
                cout<<"___________________________________\n";
                break;
            case 3:
            	cout<<"___________________________________\n";
                frecuyvelangu();
                cout<<"___________________________________\n";
                break;
            case 4:
            	cout<<"___________________________________\n";
                peri();
                cout<<"___________________________________\n";
                break;
            case 5:
            	cout<<"___________________________________\n";
                vellin();
                cout<<"___________________________________\n";
                break;
        	case 6:
			cout<<"___________________________________\n";
        		acelcent();
                cout<<"___________________________________\n";
                break;
			case 7:
				cout<<"___________________________________\n";
        		aceltan();
                cout<<"___________________________________\n";
                break;
			case 8:
				cout<<"___________________________________\n";
        		aceltotal();
        		cout<<"___________________________________\n";
                break;
			case 9:
				cout<<"___________________________________\n";
                veltang();
                cout<<"___________________________________\n";
                break;
			case 10:
                cout << "Saliendo ...\n";
                continuar = 'n';
                break;				        
            default:
                cout << "Opción no válida.\n";
        }

        if (continuar != 'n') {
            cout << "\n¿Quieres continuar? (s/n): ";
            cin >> continuar;
        }
    }
	
}
