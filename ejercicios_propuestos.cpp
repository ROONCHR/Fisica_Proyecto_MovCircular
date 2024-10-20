#include <iostream>
#include <cmath>
#include "funciones.h"
#include <cstdlib>


using namespace std;

//Funciones de los ejercicios
void ejercicio1() {
    system("cls");
    cout << "\t\t\tCalcular Velocidad Angular (Frecuencia)\n";
    cout << "\t\t=========================================\n";
    cout << "Un objeto gira a una frecuencia de 3 Hz.\n";
    cout << "¿Cuál es su velocidad angular en rad/s?\n";
    cout << " RESOLVAMOS:\n¿Necesitas ayuda?(s/n): "; 
    char resp;
    cin >> resp;

    if (resp == 's' || resp == 'S') {
        realizarOperaciones();
    } else {
        cout << "--------------------------------------\n";
        cout << "Entonces, pasamos a responder:\n";
    }
    cout << "Opciones:\n";
    cout << "a) 6 rad/s\n";
    cout << "b) 9.42 rad/s\n";
    cout << "c) 18.84 rad/s\n";
    cout << "d) 12.56 rad/s\n";
    
    char respuesta;
    cin >> respuesta;


    if (respuesta == 'c' || respuesta == 'C') {
        cout << "¡Correcto! La velocidad angular es 18.84 rad/s.\n";
    } else {
        cout << "Incorrecto. La respuesta correcta es 18.84 rad/s.\n";
    }
    cout << "--------------------------------------\n";
    system("pause");
}

void ejercicio2() {
    system("cls");
    cout << "\t\t\tCalcular Velocidad Tangencial\n";
    cout << "\t\t===============================\n";
    cout << "Un objeto gira con una velocidad angular de 4 rad/s y un radio de 5 metros.\n";
    cout << "¿Cuál es su velocidad tangencial?\n";
    cout << " RESOLVAMOS:\n¿Necesitas ayuda?(s/n): "; 
    char resp;
    cin >> resp;

    if (resp == 's' || resp == 'S') {
        realizarOperaciones();
    } else {
        cout << "--------------------------------------\n";
        cout << "Entonces, pasamos a responder:\n";
    }
    cout << "Opciones:\n";
    cout << "a) 15 m/s\n";
    cout << "b) 20 m/s\n";
    cout << "c) 25 m/s\n";
    cout << "d) 10 m/s\n";
    
    char respuesta;
    cin >> respuesta;

    

    if (respuesta == 'b' || respuesta == 'B') {
        cout << "¡Correcto! La velocidad tangencial es 20 m/s.\n";
    } else {
        cout << "Incorrecto. La respuesta correcta es 20 m/s.\n";
    }
    cout << "--------------------------------------\n";
    system("pause");
}

void ejercicio3() {
    system("cls");
    cout << "\t\t\tCalcular Aceleración Centrípta\n";
    cout << "\t\t===============================\n";
    cout << "Un objeto se mueve a 20 m/s y tiene un radio de 10 metros.\n";
    cout << "¿Cuál es su aceleración centrípeta?\n";
    cout << " RESOLVAMOS:\n¿Necesitas ayuda?(s/n): "; 
    char resp;
    cin >> resp;

    if (resp == 's' || resp == 'S') {
        realizarOperaciones();
    } else {
        cout << "--------------------------------------\n";
        cout << "Entonces, pasamos a responder:\n";
    }
    cout << "Opciones:\n";
    cout << "a) 20 m/s²\n";
    cout << "b) 10 m/s²\n";
    cout << "c) 40 m/s²\n";
    cout << "d) 5 m/s²\n";
    
    char respuesta;
    cin >> respuesta;

    

    if (respuesta == 'c' || respuesta == 'C') {
        cout << "¡Correcto! La aceleración centrípeta es 40 m/s².\n";
    } else {
        cout << "Incorrecto. La respuesta correcta es 40 m/s².\n";
    }
    cout << "--------------------------------------\n";
    system("pause");
}

void ejercicio4() {
    system("cls");
    cout << "\t\t\tCalcular Frecuencia\n";
    cout << "\t\t====================\n";
    cout << "Un objeto completa 12 revoluciones en 10 segundos.\n";
    cout << "¿Cuál es su frecuencia?\n";
    cout << " RESOLVAMOS:\n¿Necesitas ayuda?(s/n): "; 
    char resp;
    cin >> resp;

    if (resp == 's' || resp == 'S') {
        realizarOperaciones();
    } else {
        cout << "--------------------------------------\n";
        cout << "Entonces, pasamos a responder:\n";
    }
    cout << "Opciones:\n";
    cout << "a) 1.2 Hz\n";
    cout << "b) 2 Hz\n";
    cout << "c) 0.8 Hz\n";
    cout << "d) 3 Hz\n";
    
    char respuesta;
    cin >> respuesta;

    

    if (respuesta == 'a' || respuesta == 'A') {
        cout << "¡Correcto! La frecuencia es 1.2 Hz.\n";
    } else {
        cout << "Incorrecto. La respuesta correcta es 1.2 Hz.\n";
    }
    cout << "--------------------------------------\n";
    system("pause");
}

void ejercicio5() {
    system("cls");
    cout << "\t\t\tCalcular Velocidad Angular\n";
    cout << "\t\t===========================\n";
    cout << "Un objeto gira 90 grados en 2 segundos.\n";
    cout << "¿Cuál es su velocidad angular en rad/s?\n";
    cout << " RESOLVAMOS:\n¿Necesitas ayuda?(s/n): "; 
    char resp;
    cin >> resp;

    if (resp == 's' || resp == 'S') {
        realizarOperaciones();
    } else {
        cout << "--------------------------------------\n";
        cout << "Entonces, pasamos a responder:\n";
    }
    cout << "Opciones:\n";
    cout << "a) 1 rad/s\n";
    cout << "b) 2 rad/s\n";
    cout << "c) 4.5 rad/s\n";
    cout << "d) 3 rad/s\n";
    
    char respuesta;
    cin >> respuesta;

    

    if (respuesta == 'd' || respuesta == 'D') {
        cout << "¡Correcto! La velocidad angular es 3 rad/s.\n";
    } else {
        cout << "Incorrecto. La respuesta correcta es 3 rad/s.\n";
    }
    cout << "--------------------------------------\n";
    system("pause");
}
void ejercicio6() {
    system("cls");
    cout << "\t\t\tCalcular Periodo desde Frecuencia\n";
    cout << "\t\t==================================\n";
    cout << "Un objeto tiene una frecuencia de 4 Hz.\n";
    cout << "¿Cuál es su periodo?\n";
    cout << " RESOLVAMOS:\n¿Necesitas ayuda?(s/n): "; 
    char resp;
    cin >> resp;

    if (resp == 's' || resp == 'S') {
        realizarOperaciones();
    } else {
        cout << "--------------------------------------\n";
        cout << "Entonces, pasamos a responder:\n";
    }
    cout << "Opciones:\n";
    cout << "a) 0.25 s\n";
    cout << "b) 0.5 s\n";
    cout << "c) 1 s\n";
    cout << "d) 2 s\n";
    
    char respuesta;
    cin >> respuesta;

    

    if (respuesta == 'a' || respuesta == 'A') {
        cout << "¡Correcto! El periodo es 0.25 s.\n";
    } else {
        cout << "Incorrecto. La respuesta correcta es 0.25 s.\n";
    }
    cout << "--------------------------------------\n";
    system("pause");
}

void ejercicio7() {
    system("cls");
    cout << "\t\t\tCalcular Aceleración Centrípta desde Velocidad Angular\n";
    cout << "\t\t======================================================\n";
    cout << "Un objeto tiene una velocidad angular de 5 rad/s y un radio de 8 metros.\n";
    cout << "¿Cuál es su aceleración centrípeta?\n";
    cout << " RESOLVAMOS:\n¿Necesitas ayuda?(s/n): "; 
    char resp;
    cin >> resp;

    if (resp == 's' || resp == 'S') {
        realizarOperaciones();
    } else {
        cout << "--------------------------------------\n";
        cout << "Entonces, pasamos a responder:\n";
    }
    cout << "Opciones:\n";
    cout << "a) 25 m/s²\n";
    cout << "b) 32 m/s²\n";
    cout << "c) 20 m/s²\n";
    cout << "d) 10 m/s²\n";
    
    char respuesta;
    cin >> respuesta;

    

    if (respuesta == 'a' || respuesta == 'A') {
        cout << "¡Correcto! La aceleración centrípeta es 25 m/s².\n";
    } else {
        cout << "Incorrecto. La respuesta correcta es 25 m/s².\n";
    }
    cout << "--------------------------------------\n";
    system("pause");
}

void ejercicio8() {
    system("cls");
    cout << "\t\t\tCalcular Aceleración Tangencial\n";
    cout << "\t\t===============================\n";
    cout << "Un objeto aumenta su velocidad de 10 m/s a 30 m/s en 4 segundos.\n";
    cout << "¿Cuál es su aceleración tangencial?\n";
    cout << " RESOLVAMOS:\n¿Necesitas ayuda?(s/n): "; 
    char resp;
    cin >> resp;

    if (resp == 's' || resp == 'S') {
        realizarOperaciones();
    } else {
        cout << "--------------------------------------\n";
        cout << "Entonces, pasamos a responder:\n";
    }
    cout << "Opciones:\n";
    cout << "a) 5 m/s²\n";
    cout << "b) 10 m/s²\n";
    cout << "c) 7.5 m/s²\n";
    cout << "d) 2.5 m/s²\n";
    
    char respuesta;
    cin >> respuesta;


    if (respuesta == 'a' || respuesta == 'A') {
        cout << "¡Correcto! La aceleración tangencial es 5 m/s².\n";
    } else {
        cout << "Incorrecto. La respuesta correcta es 5 m/s².\n";
    }
    cout << "--------------------------------------\n";
    system("pause");
}

void ejercicio9() {
    system("cls");
    cout << "\t\t\tCalcular Aceleración Total\n";
    cout << "\t\t===========================\n";
    cout << "Un objeto tiene una aceleración centrípeta de 10 m/s² y una aceleración tangencial de 5 m/s².\n";
    cout << "¿Cuál es su aceleración total?\n";
    cout << " RESOLVAMOS:\n¿Necesitas ayuda?(s/n): "; 
    char resp;
    cin >> resp;

    if (resp == 's' || resp == 'S') {
        realizarOperaciones();
    } else {
        cout << "--------------------------------------\n";
        cout << "Entonces, pasamos a responder:\n";
    }
    cout << "Opciones:\n";
    cout << "a) 10.5 m/s²\n";
    cout << "b) 12.25 m/s²\n";
    cout << "c) 15 m/s²\n";
    cout << "d) 5.5 m/s²\n";
    
    char respuesta;
    cin >> respuesta;

    

    if (respuesta == 'b' || respuesta == 'B') {
        cout << "¡Correcto! La aceleración total es 12.25 m/s².\n";
    } else {
        cout << "Incorrecto. La respuesta correcta es 12.25 m/s².\n";
    }
    cout << "--------------------------------------\n";
    system("pause");
}



//Funcion del ejercicio propuesto
void ejerciciosPropuestos() {
    int opcion;

    do {
        system("cls");
        cout << "\t\tEjercicios Propuestos\n";
        cout << "\t\t=====================\n";
	    cout << "1. Calcular Velocidad Angular\n";
	    cout << "2. Calcular Velocidad Tangencial \n";
	    cout << "3. Calcular Aceleración Centrípta \n";
	    cout << "4. Calcular Frecuencia \n";
	    cout << "5. Calcular Velocidad Angular \n";
	    cout << "6. Calcular Periodo desde frecuencia\n";
	    cout << "7. Calcular Aceleración Centrípta desde velocidad angular\n";
	    cout << "8. Calcular Aceleración Tangencial \n";
	    cout << "9. Calcular Aceleración Total \n";
	    cout << "Elige una opción: ";
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
                cout << "Opcion invalida. Por favor, intente de nuevo.\n";
                cin.ignore();
                cin.get(); 
                break;
            }
    } while (opcion !=10 );
    system("cls");
}
