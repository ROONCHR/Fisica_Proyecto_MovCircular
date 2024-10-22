#include <iostream>
#include <cmath>
#include "funciones.h"
#include <cstdlib>

using namespace std;

//Funciones de los ejercicios
void ejercicio1() {
    system("cls");
    cout << "\t\t\t\t\t\t\t\tCalcular Velocidad Angular (Frecuencia)\n";
    cout << "\t\t\t\t\t\t\t\t=========================================\n";
    cout << "\t\t\t\t\t\t\t\tUn objeto gira a una frecuencia de 3 Hz.\n";
    cout << "\t\t\t\t\t\t\t\t¿Cuál es su velocidad angular en rad/s?\n";
    cout << "\t\t\t\t\t\t\t\t RESOLVAMOS:\n\t\t\t\t\t\t\t\t¿Necesitas ayuda?(s/n): "; 
    char resp;
    cin >> resp;

    if (resp == 's' || resp == 'S') {
        realizarOperaciones();
    } else {
        cout << "\t\t\t\t\t\t\t\t--------------------------------------\n";
        cout << "\t\t\t\t\t\t\t\tEntonces, pasamos a responder:\n";
    }
    cout << "\t\t\t\t\t\t\t\tOpciones:\n";
    cout << "\t\t\t\t\t\t\t\ta) 6 rad/s\n";
    cout << "\t\t\t\t\t\t\t\tb) 9.42 rad/s\n";
    cout << "\t\t\t\t\t\t\t\tc) 18.84 rad/s\n";
    cout << "\t\t\t\t\t\t\t\td) 12.56 rad/s\n";
    
    char respuesta;
    cin >> respuesta;

    if (respuesta == 'c' || respuesta == 'C') {
        cout << "\t\t\t\t\t\t\t\t¡Correcto! La velocidad angular es 18.84 rad/s.\n";
    } else {
        cout << "\t\t\t\t\t\t\t\tIncorrecto. La respuesta correcta es 18.84 rad/s.\n";
    }
    cout << "\t\t\t\t\t\t\t\t--------------------------------------\n";
    system("pause");
}

void ejercicio2() {
    system("cls");
    cout << "\t\t\t\t\t\t\t\tCalcular Velocidad Tangencial\n";
    cout << "\t\t\t\t\t\t\t\t===============================\n";
    centrarTexto("Un disco gira con una frecuencia de 3 Hz (revoluciones por segundo). El radio del disco es de 0.5 metros.\n");
    cout << "\t\t\t\t\t\t\t\t¿Cuál es su velocidad tangencial?\n";
    cout << "\t\t\t\t\t\t\t\t RESOLVAMOS:\n\t\t\t\t\t\t\t\t¿Necesitas ayuda?(s/n): "; 
    char resp;
    cin >> resp;

    if (resp == 's' || resp == 'S') {
        realizarOperaciones();
    } else {
        cout << "\t\t\t\t\t\t\t\t--------------------------------------\n";
        cout << "\t\t\t\t\t\t\t\tEntonces, pasamos a responder:\n";
    }
    cout << "\t\t\t\t\t\t\t\tOpciones:\n";
    cout << "\t\t\t\t\t\t\t\ta) 15.3 m/s\n";
    cout << "\t\t\t\t\t\t\t\tb) 9.42 m/s\n";
    cout << "\t\t\t\t\t\t\t\tc) 25.98 m/s\n";
    cout << "\t\t\t\t\t\t\t\td) 10 m/s\n";
    
    char respuesta;
    cin >> respuesta;

    if (respuesta == 'b' || respuesta == 'B') {
        cout << "\t\t\t\t\t\t\t\t¡Correcto! La velocidad tangencial es 9.42 m/s.\n";
    } else {
        cout << "\t\t\t\t\t\t\t\tIncorrecto. La respuesta correcta es 9.42 m/s.\n";
    }
    cout << "\t\t\t\t\t\t\t\t--------------------------------------\n";
    system("pause");
}

void ejercicio3() {
    system("cls");
    cout << "\t\t\t\t\t\t\t\tCalcular Aceleración Centrípta\n";
    cout << "\t\t\t\t\t\t\t\t===============================\n";
    cout << "\t\t\t\t\t\t\t\tUn objeto se mueve a 20 m/s y tiene un radio de 10 metros.\n";
    cout << "\t\t\t\t\t\t\t\t¿Cuál es su aceleración centrípeta?\n";
    cout << "\t\t\t\t\t\t\t\t RESOLVAMOS:\n\t\t\t\t\t\t\t\t¿Necesitas ayuda?(s/n): "; 
    char resp;
    cin >> resp;

    if (resp == 's' || resp == 'S') {
        realizarOperaciones();
    } else {
        cout << "\t\t\t\t\t\t\t\t--------------------------------------\n";
        cout << "\t\t\t\t\t\t\t\tEntonces, pasamos a responder:\n";
    }
    cout << "\t\t\t\t\t\t\t\tOpciones:\n";
    cout << "\t\t\t\t\t\t\t\ta) 20 m/s²\n";
    cout << "\t\t\t\t\t\t\t\tb) 10 m/s²\n";
    cout << "\t\t\t\t\t\t\t\tc) 40 m/s²\n";
    cout << "\t\t\t\t\t\t\t\td) 5 m/s²\n";
    
    char respuesta;
    cin >> respuesta;

    if (respuesta == 'c' || respuesta == 'C') {
        cout << "\t\t\t\t\t\t\t\t¡Correcto! La aceleración centrípeta es 40 m/s².\n";
    } else {
        cout << "\t\t\t\t\t\t\t\tIncorrecto. La respuesta correcta es 40 m/s².\n";
    }
    cout << "\t\t\t\t\t\t\t\t--------------------------------------\n";
    system("pause");
}

void ejercicio4() {
    system("cls");
    cout << "\t\t\t\t\t\t\t\tCalcular Frecuencia\n";
    cout << "\t\t\t\t\t\t\t\t====================\n";
    cout << "\t\t\t\t\t\t\t\tUn objeto completa 12 revoluciones en 10 segundos.\n";
    cout << "\t\t\t\t\t\t\t\t¿Cuál es su frecuencia?\n";
    cout << "\t\t\t\t\t\t\t\t RESOLVAMOS:\n\t\t\t\t\t\t\t\t¿Necesitas ayuda?(s/n): "; 
    char resp;
    cin >> resp;

    if (resp == 's' || resp == 'S') {
        realizarOperaciones();
    } else {
        cout << "\t\t\t\t\t\t\t\t--------------------------------------\n";
        cout << "\t\t\t\t\t\t\t\tEntonces, pasamos a responder:\n";
    }
    cout << "\t\t\t\t\t\t\t\tOpciones:\n";
    cout << "\t\t\t\t\t\t\t\ta) 1.2 Hz\n";
    cout << "\t\t\t\t\t\t\t\tb) 2 Hz\n";
    cout << "\t\t\t\t\t\t\t\tc) 0.8 Hz\n";
    cout << "\t\t\t\t\t\t\t\td) 3 Hz\n";
    
    char respuesta;
    cin >> respuesta;

    if (respuesta == 'a' || respuesta == 'A') {
        cout << "\t\t\t\t\t\t\t\t¡Correcto! La frecuencia es 1.2 Hz.\n";
    } else {
        cout << "\t\t\t\t\t\t\t\tIncorrecto. La respuesta correcta es 1.2 Hz.\n";
    }
    cout << "\t\t\t\t\t\t\t\t--------------------------------------\n";
    system("pause");
}

void ejercicio5() {
    system("cls");
    cout << "\t\t\t\t\t\t\t\tCalcular Velocidad Angular\n";
    cout << "\t\t\t\t\t\t\t\t===========================\n";
    centrarTexto("Un objeto gira y ha recorrido un ángulo de 4 radianes en un tiempo de 2 segundos.\n");
    cout << "\t\t\t\t\t\t\t\t¿Cuál es su velocidad angular en rad/s?\n";
    cout << "\t\t\t\t\t\t\t\t RESOLVAMOS:\n\t\t\t\t\t\t\t\t¿Necesitas ayuda?(s/n): "; 
    char resp;
    cin >> resp;

    if (resp == 's' || resp == 'S') {
        realizarOperaciones();
    } else {
        cout << "\t\t\t\t\t\t\t\t--------------------------------------\n";
        cout << "\t\t\t\t\t\t\t\tEntonces, pasamos a responder:\n";
    }
    cout << "\t\t\t\t\t\t\t\tOpciones:\n";
    cout << "\t\t\t\t\t\t\t\ta) 2 rad/s\n";
    cout << "\t\t\t\t\t\t\t\tb) 10 rad/s\n";
    cout << "\t\t\t\t\t\t\t\tc) 15 rad/s\n";
    cout << "\t\t\t\t\t\t\t\td) 20 rad/s\n";
    
    char respuesta;
    cin >> respuesta;

    if (respuesta == 'a' || respuesta == 'A') {
        cout << "\t\t\t\t\t\t\t\t¡Correcto! La velocidad angular es 2 rad/s.\n";
    } else {
        cout << "\t\t\t\t\t\t\t\tIncorrecto. La respuesta correcta es 2 rad/s.\n";
    }
    cout << "\t\t\t\t\t\t\t\t--------------------------------------\n";
    system("pause");
}
void ejercicio6() {
    system("cls");
    cout << "\t\t\t\t\t\t\tCalcular Periodo desde Frecuencia\n";
    cout << "\t\t\t\t\t\t\t==================================\n";
    cout << "\t\t\t\t\t\t\tUn objeto tiene una frecuencia de 4 Hz.\n";
    cout << "\t\t\t\t\t\t\t¿Cuál es su periodo?\n";
    cout << "\t\t\t\t\t\t\t RESOLVAMOS:\n\t\t\t\t\t\t\t\t¿Necesitas ayuda?(s/n): "; 
    char resp;
    cin >> resp;

    if (resp == 's' || resp == 'S') {
        realizarOperaciones();
    } else {
        cout << "\t\t\t\t\t\t\t\t--------------------------------------\n";
        cout << "\t\t\t\t\t\t\tEntonces, pasamos a responder:\n";
    }
    cout << "\t\t\t\t\t\t\tOpciones:\n";
    cout << "\t\t\t\t\t\t\ta) 0.25 s\n";
    cout << "\t\t\t\t\t\t\tb) 0.5 s\n";
    cout << "\t\t\t\t\t\t\tc) 1 s\n";
    cout << "\t\t\t\t\t\t\td) 2 s\n";
    
    char respuesta;
    cin >> respuesta;

    if (respuesta == 'a' || respuesta == 'A') {
        cout << "\t\t\t\t\t\t\t¡Correcto! El periodo es 0.25 s.\n";
    } else {
        cout << "\t\t\t\t\t\t\tIncorrecto. La respuesta correcta es 0.25 s.\n";
    }
    cout << "\t\t\t\t\t\t\t\t--------------------------------------\n";
    system("pause");
}

void ejercicio7() {
    system("cls");
    cout << "\t\t\t\t\t\t\tCalcular Aceleración Centrípta desde Velocidad Angular\n";
    cout << "\t\t\t\t\t\t\t======================================================\n";
    centrarTexto("Un objeto tiene una velocidad angular de 5 rad/s y un radio de 8 metros.\n");
    cout << "\t\t\t\t\t\t\t¿Cuál es su aceleración centrípeta?\n";
    cout << "\t\t\t\t\t\t\t RESOLVAMOS:\n\t\t\t\t\t\t\t\t¿Necesitas ayuda?(s/n): "; 
    char resp;
    cin >> resp;

    if (resp == 's' || resp == 'S') {
        realizarOperaciones();
    } else {
        cout << "\t\t\t\t\t\t\t\t--------------------------------------\n";
        cout << "\t\t\t\t\t\t\tEntonces, pasamos a responder:\n";
    }
    cout << "\t\t\t\t\t\t\tOpciones:\n";
    cout << "\t\t\t\t\t\t\ta) 200 m/s²\n";
    cout << "\t\t\t\t\t\t\tb) 250 m/s²\n";
    cout << "\t\t\t\t\t\t\tc) 209 m/s²\n";
    cout << "\t\t\t\t\t\t\td) 100 m/s²\n";
    
    char respuesta;
    cin >> respuesta;

    if (respuesta == 'a' || respuesta == 'A') {
        cout << "\t\t\t\t\t\t\t¡Correcto! La aceleración centrípeta es 200 m/s².\n";
    } else {
        cout << "\t\t\t\t\t\t\tIncorrecto. La respuesta correcta es 200 m/s².\n";
    }
    cout << "\t\t\t\t\t\t\t\t--------------------------------------\n";
    system("pause");
}

void ejercicio8() {
    system("cls");
    cout << "\t\t\t\t\t\t\tCalcular Aceleración Tangencial\n";
    cout << "\t\t\t\t\t\t\t===============================\n";
    cout << "\t\t\t\t\t\t\tUn objeto aumenta su velocidad de 10 m/s a 30 m/s en 4 segundos.\n";
    cout << "\t\t\t\t\t\t\t¿Cuál es su aceleración tangencial?\n";
    cout << "\t\t\t\t\t\t\t RESOLVAMOS:\n\t\t\t\t\t\t\t\t¿Necesitas ayuda?(s/n): "; 
    char resp;
    cin >> resp;

    if (resp == 's' || resp == 'S') {
    	cout << "\t\t\t\t\t\t\tOjo Primero: notamos que la diferencia de velocidades es 30 - 10 = 20 m/s \n\n";
        realizarOperaciones();
    } else {
        cout << "\t\t\t\t\t\t\t\t--------------------------------------\n";
        cout << "\t\t\t\t\t\t\tEntonces, pasamos a responder:\n";
    }
    cout << "\t\t\t\t\t\t\tOpciones:\n";
    cout << "\t\t\t\t\t\t\ta) 5 m/s²\n";
    cout << "\t\t\t\t\t\t\tb) 10 m/s²\n";
    cout << "\t\t\t\t\t\t\tc) 7.5 m/s²\n";
    cout << "\t\t\t\t\t\t\td) 2.5 m/s²\n";
    
    char respuesta;
    cin >> respuesta;

    if (respuesta == 'a' || respuesta == 'A') {
        cout << "\t\t\t\t\t\t\t¡Correcto! La aceleración tangencial es 5 m/s².\n";
    } else {
        cout << "\t\t\t\t\t\t\tIncorrecto. La respuesta correcta es 5 m/s².\n";
    }
    cout << "\t\t\t\t\t\t\t\t--------------------------------------\n";
    system("pause");
}

void ejercicio9() {
    system("cls");
    cout << "\t\t\t\t\t\t\tCalcular Aceleración Total\n";
    cout << "\t\t\t\t\t\t\t===========================\n";
    cout << "\t\t\t\t\t\t\tUn objeto tiene una aceleración centrípeta de 10 m/s² y una aceleración tangencial de 5 m/s².\n";
    cout << "\t\t\t\t\t\t\t¿Cuál es su aceleración total?\n";
    cout << "\t\t\t\t\t\t\t RESOLVAMOS:\n\t\t\t\t\t\t\t\t¿Necesitas ayuda?(s/n): "; 
    char resp;
    cin >> resp;

    if (resp == 's' || resp == 'S') {
        realizarOperaciones();
    } else {
        cout << "\t\t\t\t\t\t\t\t--------------------------------------\n";
        cout << "\t\t\t\t\t\t\tEntonces, pasamos a responder:\n";
    }
    cout << "\t\t\t\t\t\t\tOpciones:\n";
    cout << "\t\t\t\t\t\t\ta) 10.5 m/s²\n";
    cout << "\t\t\t\t\t\t\tb) 11.18 m/s²\n";
    cout << "\t\t\t\t\t\t\tc) 15 m/s²\n";
    cout << "\t\t\t\t\t\t\td) 5.5 m/s²\n";
    
    char respuesta;
    cin >> respuesta;

    if (respuesta == 'b' || respuesta == 'B') {
        cout << "\t\t\t\t\t\t\t¡Correcto! La aceleración total es 11.18 m/s².\n";
    } else {
        cout << "\t\t\t\t\t\t\tIncorrecto. La respuesta correcta es 11.18 m/s².\n";
    }
    cout << "\t\t\t\t\t\t\t\t--------------------------------------\n";
    system("pause");
}

// Función del ejercicio propuesto
void ejerciciosPropuestos() {
    int opcion;

    do {
        system("cls");
        cout << "\t\t\t\t\t\tEjercicios Propuestos\n";
        cout << "\t\t\t\t\t\t=====================\n";
        cout << "\t\t\t\t\t\t1. Calcular Velocidad Angular\n";
        cout << "\t\t\t\t\t\t2. Calcular Velocidad Tangencial \n";
        cout << "\t\t\t\t\t\t3. Calcular Aceleración Centrípta \n";
        cout << "\t\t\t\t\t\t4. Calcular Frecuencia \n";
        cout << "\t\t\t\t\t\t5. Calcular Velocidad Angular \n";
        cout << "\t\t\t\t\t\t6. Calcular Periodo desde frecuencia\n";
        cout << "\t\t\t\t\t\t7. Calcular Aceleración Centrípta desde velocidad angular\n";
        cout << "\t\t\t\t\t\t8. Calcular Aceleración Tangencial \n";
        cout << "\t\t\t\t\t\t9. Calcular Aceleración Total \n";
        cout << "\t\t\t\t\t\t10. Salir \n";
        cout << "\t\t\t\t\t\tElige una opción: ";
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
                ejercicio5(); 
                break;
            case 6:
                ejercicio6();  
                break;
            case 7:
                ejercicio7(); 
                break;
            case 8:
                ejercicio8();
                break;
            case 9:
                ejercicio9();
                break;
            case 10:
                break;
            default:
                cout << "\t\t\t\t\t\tOpción inválida. Por favor, intente de nuevo.\n";
                cin.ignore();
                cin.get(); 
                break;
        }
    }while(opcion!=10);
}

