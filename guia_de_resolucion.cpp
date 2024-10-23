#include <iostream>
#include <cmath>
#include <cstdlib>
#include "funciones.h"
#include <ctime>


using namespace std;

// Guía de resolución de problemas tipo
void guiaResolucionProblemas() {
	srand(time(0));
	cout << endl;
	float frecuencia = ((rand() % 200) / 10.0) + 1 ;
    float radio = ((rand() % 100) / 10.0) + 1;
    centrarTexto("--- Guía de Resolución de Problemas Tipo ---\n");
    cout << "\t\t\t\t\t\t\tVamos a resolver un problema de forma guiada.\n";
    cout << "\t\t\t\t\t\t\tProblema: Un objeto con radio de "<<radio<<" metros gira con una frecuencia de "<<frecuencia<<" Hz. \n";
    cout << "\t\t\t\t\t\t\tPaso 1: Calculamos la velocidad angular (w).\n";
    
    float velocidadAngular = calcularVelocidadAngular(frecuencia);
    cout << "\t\t\t\t\t\t\t\tw = 2pt\n";
    cout << "\t\t\t\t\t\t\t\tp = 3.1416 \t t = " << frecuencia << "\n\n";
    cout << "\t\t\t\t\t\t\t\tw = 2 * p * " << frecuencia <<" = " << velocidadAngular << " rad/s\n\n";
    system("pause");
    
    cout << "\t\t\t\t\t\t\tPaso 2: Calculamos la velocidad tangencial (v).\n";
    float velocidadTangencial = calcularVelocidadTangencial(radio, velocidadAngular);
    cout << "\t\t\t\t\t\t\t\tv = w * r\n";
    cout << "\t\t\t\t\t\t\t\tw = "<< velocidadAngular << " \t r = "<<radio<<"\n\n";
    cout << "\t\t\t\t\t\t\t\tv = " << velocidadAngular << " * " << radio << " = " << velocidadTangencial << " m/s\n\n";
    system("pause");
    
    cout << "\t\t\t\t\t\t\tPaso 3: Calculamos la aceleración centrípeta (a).\n";
    float aceleracionCentripeta = calcularAceleracionCentripeta(velocidadTangencial, radio);
    cout << "\t\t\t\t\t\t\t\t      V^2           \tV = " << velocidadTangencial << "\n";
    cout << "\t\t\t\t\t\t\t\t a = ----- = w^2 * r\tr = " << radio << "\n";
    cout << "\t\t\t\t\t\t\t\t       r            \tw = " << velocidadAngular;
    cout << "\n\n";
    cout << "\t\t\t\t\t\t\t\t       "<< velocidadTangencial << "^2           \n";
    cout << "\t\t\t\t\t\t\t\t a = ------------ = "<< velocidadAngular <<"^2 * "<< radio << " => " << aceleracionCentripeta << " m/s²\n";
    cout << "\t\t\t\t\t\t\t\t          "<< radio <<"            \n";
    centrarTexto("--------------------------------------\n");
    system("pause");
    
}
