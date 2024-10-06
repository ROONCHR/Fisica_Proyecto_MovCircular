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



