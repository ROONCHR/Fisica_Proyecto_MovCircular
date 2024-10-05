#include <iostream>
#include <cmath>
#include "funciones.h"


 // Para cálculos matemáticos
using namespace std;

// Menú principal
int menu() {
	
    int opcion;
    char continuar = 's';

    cout << "--- Bienvenido al Programa de Movimiento Circular ---\n";
    while (continuar == 's' || continuar == 'S') {
        cout << "\n¿Qué te gustaría hacer?\n";
        cout << "1. Ver Teoría\n";
        cout << "2. Realizar Operaciones\n";
        cout << "3. Resolver Ejercicios Propuestos\n";
        cout << "4. Guía de Resolución de Problemas Tipo\n";
        cout << "5. Formulario\n";
        cout << "6. Salir\n";
		cout << "7. Limpiar pantalla\n";
        cout << "Elige una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
            	
                mostrarTeoria();
                
                break;
            case 2:
            	
                realizarOperaciones();
                
                break;
            case 3:
            	
                ejerciciosPropuestos();
                
                break;
            case 4:
            	 
                guiaResolucionProblemas();
                
                break;
            case 5:
            	
                formulario();
                
                break;
        	case 6:
                cout << "Saliendo del programa...\n";
                continuar = 'n';
                break;
			case 7:
				system("cls");
				break;        
            default:
                cout << "Opción no válida.\n";
        }

        cout<<"___________________________________";
    }

    return 0;
}

