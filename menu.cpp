#include <iostream>
#include <cmath>
#include <iomanip>
#include "funciones.h"


 // Para c�lculos matem�ticos
using namespace std;

void centrarTexto(string texto) {
    int espacios = (ANCHO_CONSOLA - texto.length()) / 2;
    cout << setw(espacios + texto.length()) << texto << endl;
}

// Men� principal
int menu() {
	
    int opcion;
    char continuar = 's';

    
    
    while (continuar == 's' || continuar == 'S') {
    	cout << endl;
	    centrarTexto("****************************************************");
	    centrarTexto("*                                                  *");
	    centrarTexto("*                MOVIMIENTO CIRCULAR               *");
	    centrarTexto("*                                                  *");
	    centrarTexto("****************************************************");
        cout << "\t\t\t\t\t\t\t�Qu� te gustar�a hacer?\n";
        cout << "\t\t\t\t\t\t\t1. Ver Teor�a\n";
        cout << "\t\t\t\t\t\t\t2. Realizar Operaciones\n";
        cout << "\t\t\t\t\t\t\t3. Resolver Ejercicios Propuestos\n";
        cout << "\t\t\t\t\t\t\t4. Gu�a de Resoluci�n de Problemas Tipo\n";
        cout << "\t\t\t\t\t\t\t5. Formulario\n";
        cout << "\t\t\t\t\t\t\t6. Salir\n";
		cout << "\t\t\t\t\t\t\t7. Limpiar pantalla\n";
        cout << "\t\t\t\t\t\t\tElige una opci�n: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
            	cout << "\t\t\t\t\t\t\t___________________________________\n";
                mostrarTeoria();
            	cout << "\t\t\t\t\t\t\t___________________________________\n";
                break;
            case 2:
            	cout << "\t\t\t\t\t\t\t___________________________________\n";
                realizarOperaciones();
            	cout << "\t\t\t\t\t\t\t___________________________________\n";
                break;
            case 3:
            	cout << "\t\t\t\t\t\t\t___________________________________\n";
                ejerciciosPropuestos();
            	cout << "\t\t\t\t\t\t\t___________________________________\n";
                break;
            case 4:
            	cout << "\t\t\t\t\t\t\t___________________________________\n";
                guiaResolucionProblemas();
            	cout << "\t\t\t\t\t\t\t___________________________________\n";
                break;
            case 5:
            	cout << "\t\t\t\t\t\t\t___________________________________\n";
                formulario();
            	cout << "\t\t\t\t\t\t\t___________________________________\n";
                break;
        	case 6:
				cout << "\t\t\t\t\t\t\tSaliendo del programa...\n";
                continuar = 'n';
                break;
			case 7:
				system("cls");
				break;        
            default:
				cout << "\t\t\t\t\t\t\tOpci�n no v�lida.\n";
        }

		cout << "\t\t\t\t\t\t\t___________________________________\n";
    }

    return 0;
}

