#include <iostream>
#include <cmath>
#include "funciones.h"

using namespace std;

void OPfrecuyvelangu(float f){
	cout<< "\nRemplazamos los datos:\n\n";
	cout << "      w = 2pf    \n";
    cout << "      w = 2("<<PI<<")("<<f<<")"<<"    \n";
    float velocidadAngular = calcularVelocidadAngular(f);
    cout << "      w = " << velocidadAngular << " rad/s.\n\n";
    
}
void OPveltang(float r,float f){
	cout << "Primero: nesesitamos la velocidad angular (w):\n";
	OPfrecuyvelangu(f);
	float velocidadAngular = calcularVelocidadAngular(f);
	cout << "Luego para la velocidad tangencial:\n"; 
	cout << "Remplazamos los datos:\n\n";
    cout << "    v_t = r*w   \n";
    cout << "    v_t = ("<<r<<")("<<velocidadAngular<<")"<<"   \n";
    float velocidadTangencial = calcularVelocidadTangencial(r, velocidadAngular);
    cout << "    v_t = " << velocidadTangencial << " m/s.\n\n";
   	
}
void OPacelcent(float vt,float r){
	cout<< "\nRemplazamos los datos:\n\n";
	cout << "              v^2             \n";
    cout << "       a_c = -----    \n";
    cout << "               r              \n";
    cout << "             ("<<vt<<")("<<vt<<")             \n";
    cout << "       a_c = -------------------    \n";
    cout << "                  ("<<r<<")              \n";
    float aceleracionCentripeta = calcularAceleracionCentripeta(vt, r);
    cout << "       a_c = " << aceleracionCentripeta << " m/s².\n\n";
}
void OPfrecuencia(float n, float s){
	cout<< "\nRemplazamos los datos:\n\n";
	cout << "              revoluciones             \n";
    cout << "         F = --------------    \n";
    cout << "               segundos              \n";
    cout << "                  ("<<n<<")             \n";
    cout << "       F = -------------------    \n";
    cout << "                  ("<<s<<")              \n";
    float frecuencia = calcularFrecuencia(n, s);
    cout << "       F = " << frecuencia << " Hz.\n\n";
}

// Formato para Velocidad Angular desde ángulo y tiempo
void OPvelangular(double angulo, double tiempo) {
    cout << "\nRemplazamos los datos:\n\n";
    cout << "              ?            \n";
    cout << "      w =  ---------    \n";
    cout << "              t            \n";
    cout << "             (" << angulo << ")             \n";
    cout << "      w =  -------------------    \n";
    cout << "              (" << tiempo << ")            \n";
    double velocidadAngular = calcularVelocidadAngular(angulo, tiempo);
    cout << "      w = " << velocidadAngular << " rad/s.\n\n";
}

// Formato para Periodo desde frecuencia
void OPperiodo(double frecuencia) {
    cout << "\nRemplazamos los datos:\n\n";
    cout << "              1            \n";
    cout << "      T =  ---------    \n";
    cout << "              f            \n";
    cout << "             (1)           \n";
    cout << "      T =  -------------------    \n";
    cout << "             (" << frecuencia << ")           \n";
    double periodo = calcularPeriodo(frecuencia);
    cout << "      T = " << periodo << " s.\n\n";
}

// Formato para Aceleración Centrípta desde velocidad angular y radio
void OPacelcent_angular(double velocidadAngular, double radio) {
    cout << "\nRemplazamos los datos:\n\n";
    cout << "              w^2 * r            \n";
    cout << "      a_c =  -------------------    \n";
    cout << "               (" << velocidadAngular << "^2) * " << radio << "           \n";
    double aceleracionCentripeta = calcularAceleracionCentripetaDesdeVelocidadAngular(velocidadAngular, radio);
    cout << "      a_c = " << aceleracionCentripeta << " m/s^2.\n\n";
}

// Formato para Aceleración Tangencial
void OPacelTangencial(double variacionVelocidad, double variacionTiempo) {
    cout << "\nRemplazamos los datos:\n\n";
    cout << "              ?v            \n";
    cout << "      a_t =  ---------    \n";
    cout << "              ?t            \n";
    cout << "             (" << variacionVelocidad << ")           \n";
    cout << "      a_t =  -------------------    \n";
    cout << "             (" << variacionTiempo << ")           \n";
    double aceleracionTangencial = calcularAceleracionTangencial(variacionVelocidad, variacionTiempo);
    cout << "      a_t = " << aceleracionTangencial << " m/s^2.\n\n";
}

// Formato para Aceleración Total
void OPacelTotal(double aceleracionCentripeta, double aceleracionTangencial) {
    cout << "\nRemplazamos los datos:\n\n";
    cout << "      a_total = v(a_c^2 + a_t^2)\n";
    cout << "      a_total = v(" << aceleracionCentripeta << "^2 + " << aceleracionTangencial << "^2)\n";
    double aceleracionTotal = calcularAceleracionTotal(aceleracionCentripeta, aceleracionTangencial);
    cout << "      a_total = " << aceleracionTotal << " m/s^2.\n\n";
}

