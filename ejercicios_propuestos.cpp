#include <iostream>
#include <cmath>
#include "funciones.h"
#include <cstdlib>


using namespace std;

//Funciones de los ejercicios
void ejercicio1() {
    system("cls");
    cout << "\t\t\tEjercicio 1\n";
    cout << "\t\t=============\n";
    cout << "1. Un objeto gira con una frecuencia de 5 Hz en una trayectoria circular de 2 metros de radio.\n";
    cout << "   ¿Cual es su velocidad angular?\n";
    cout << "   a) 31.41 rad/s\n";
    cout << "   b) 12.56 rad/s\n";
    cout << "   c) 62.83 rad/s\n";
    cout << "Elige la respuesta correcta: ";
    char respuesta;
    cin >> respuesta;

    if (respuesta == 'b' || respuesta == 'B') {
        cout << "Correcto! La velocidad angular es 31.41 rad/s.\n";
    } else if (respuesta == 'a' || respuesta == 'A' || respuesta == 'c' || respuesta == 'C') {
        cout << "Incorrecto. La respuesta correcta es 31.41 rad/s.\n";
    }else {
        cout << "Opcion invalida\n";
    }
    cout << "--------------------------------------\n";
    cin.ignore();
    cin.get();
}

void ejercicio2() {
    char respuesta;
    system("cls");
    cout << "\t\t\tEjercicio 2\n";
    cout << "\t\t=============\n";
    cout << "Un objeto gira con una velocidad angular de 8.96 rad/s.\n";
    cout << "¿Cual es el periodo de rotacion del objeto?\n";
    cout << "a) 0.7 segundos\n";
    cout << "b) 1.25 segundos\n";
    cout << "c) 0.88 segundos\n";
    cout << "Elige la respuesta correcta: ";
    cin >> respuesta;

    if (respuesta == 'c' || respuesta == 'C') {
        cout << "¡Correcto! El periodo de rotación es aproximadamente 0.88 segundos.\n";
    } else if (respuesta == 'a' || respuesta == 'A' || respuesta == 'b' || respuesta == 'B') {
        cout << "Incorrecto. La respuesta correcta es 0.88 segundos.\n";
    }else {
        cout << "Opcion invalida\n";
    }
    cout << "--------------------------------------\n";
    cin.ignore();
    cin.get();
}


void ejercicio3() {
    char respuesta;
    system("cls");
    cout << "\t\t\tEjercicio 3\n";
    cout << "\t\t=============\n";
    cout << "Un ciclista se mueve a lo largo de una pista circular con un radio de 22 metros, y completa una vuelta cada 3.6 segundos.\n";
    cout << "¿Cual es su velocidad lineal?\n";
    cout << "a) 40.25 m/s\n";
    cout << "b) 38.40 m/s\n";
    cout << "c) 36.50 m/s\n";
    cout << "Elige la respuesta correcta: ";
    cin >> respuesta;

    if (respuesta == 'b' || respuesta == 'B') {
        cout << "¡Correcto! La velocidad lineal es 38.40 m/s.\n";
    } else if (respuesta == 'a' || respuesta == 'A' || respuesta == 'c' || respuesta == 'C') {
        cout << "Incorrecto. La respuesta correcta es 38.40 m/s.\n";
    }else {
        cout << "Opcion invalida\n";
    }
    cout << "--------------------------------------\n";
    cin.ignore();
    cin.get();
}

void ejercicio4() {
    char respuesta;
    system("cls");
    cout << "\t\t\tEjercicio 4\n";
    cout << "\t\t=============\n";
    cout << "Un automovil esta recorriendo una pista circular que tiene un radio de 47 metros, a una velocidad constante de 25 m/s.\n";
    cout << "¿Cual es la aceleracion centripeta del automovil?\n";
    cout << "a) 13.30 m/s^2\n";
    cout << "b) 10.64 m/s^2\n";
    cout << "c) 14.12 m/s^2\n";
    cout << "Elige la respuesta correcta: ";
    cin >> respuesta;

    if (respuesta == 'b' || respuesta == 'B') {
        cout << "¡Correcto! La aceleracion centripeta es 10.64 m/s^2.\n";
    } else if (respuesta == 'a' || respuesta == 'A' || respuesta == 'c' || respuesta == 'C') {
        cout << "Incorrecto. La respuesta correcta es 10.64 m/s^2.\n";
    } else {
        cout << "Opcion invalida\n";
    }
    cout << "--------------------------------------\n";
    cin.ignore();
    cin.get();
}

//Funcion del ejercicio propuesto
void ejerciciosPropuestos() {
    int opcion;

    do {
        system("cls");
        cout << "\t\tEjercicios Propuestos\n";
        cout << "\t\t=====================\n";
        cout << "1. Calcular la velocidad angular\n";
        cout << "2. Calcular el periodo\n";
        cout << "3. Calcular la velocidad lineal\n";
        cout << "4. Calcular la aceleracion centripeta\n";
        cout << "5. Salir\n\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                ejercicio1(); 
                break;
            case 2:
                ejercicio2();  
                break;
            case 3:
                ejercicio3(); 
                break;
            case 4:
                ejercicio4();
                break;
            case 5:
                break;
            default:
                cout << "Opcion invalida. Por favor, intente de nuevo.\n";
                cin.ignore();
                cin.get(); 
                break;
            }
    } while (opcion != 5);
    system("cls");
}