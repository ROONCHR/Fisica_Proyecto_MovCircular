#include <iostream> 
#include <cmath>
#include <string>
#include "funciones.h"

using namespace std;

void OPfrecuyvelangu(float f) {
    cout << "\n\t\t\t\t\t\t\t\tRemplazamos los datos:\n";
    cout << "\t\t\t\t\t\t\t\t      w = 2pf    \n";
    cout << "\t\t\t\t\t\t\t\t      w = 2(" << PI << ")(" << f << ")    \n";
    float velocidadAngular = calcularVelocidadAngular(f);
    cout << "\t\t\t\t\t\t\t\t      w = " << velocidadAngular << " rad/s.\n\n";
}

void OPveltang(float r, float f) {
    cout << "\t\t\t\t\t\t\t\tPrimero: necesitamos la velocidad angular (w):\n";
    OPfrecuyvelangu(f);
    float velocidadAngular = calcularVelocidadAngular(f);
    cout << "\t\t\t\t\t\t\t\tLuego para la velocidad tangencial:\n"; 
    cout << "\t\t\t\t\t\t\t\tRemplazamos los datos:\n\n";
    cout << "\t\t\t\t\t\t\t\t    v_t = r*w   \n";
    cout << "\t\t\t\t\t\t\t\t    v_t = (" << r << ")(" << velocidadAngular << ")   \n";
    float velocidadTangencial = calcularVelocidadTangencial(r, velocidadAngular);
    cout << "\t\t\t\t\t\t\t\t    v_t = " << velocidadTangencial << " m/s.\n\n";
}

void OPacelcent(float vt, float r) {
    cout << "\t\t\t\t\t\t\t\tRemplazamos los datos:\n\n";
    cout << "\t\t\t\t\t\t\t\t              v^2             \n";
    cout << "\t\t\t\t\t\t\t\t       a_c = -----    \n";
    cout << "\t\t\t\t\t\t\t\t               r              \n";
    cout << "\t\t\t\t\t\t\t\t             (" << vt << ")^2             \n";
    cout << "\t\t\t\t\t\t\t\t       a_c = -------------------    \n";
    cout << "\t\t\t\t\t\t\t\t                  (" << r << ")              \n";
    float aceleracionCentripeta = calcularAceleracionCentripeta(vt, r);
    cout << "\t\t\t\t\t\t\t\t       a_c = " << aceleracionCentripeta << " m/s².\n\n";
}

void OPfrecuencia(float n, float s) {
    cout << "\t\t\t\t\t\t\t\tRemplazamos los datos:\n\n";
    cout << "\t\t\t\t\t\t\t\t              revoluciones             \n";
    cout << "\t\t\t\t\t\t\t\t         F = --------------    \n";
    cout << "\t\t\t\t\t\t\t\t               segundos              \n";
    cout << "\t\t\t\t\t\t\t\t                  (" << n << ")             \n";
    cout << "\t\t\t\t\t\t\t\t       F = -------------------    \n";
    cout << "\t\t\t\t\t\t\t\t                  (" << s << ")              \n";
    float frecuencia = calcularFrecuencia(n, s);
    cout << "\t\t\t\t\t\t\t\t       F = " << frecuencia << " Hz.\n\n";
}

// Formato para Velocidad Angular desde ángulo y tiempo
void OPvelangular(double angulo, double tiempo) {
	veloangu();
    cout << "\t\t\t\t\t\t\t\tRemplazamos los datos:\n\n";
    cout << "\t\t\t\t\t\t\t\t            ?angulo            \n";
    cout << "\t\t\t\t\t\t\t\t      w =  ---------    \n";
    cout << "\t\t\t\t\t\t\t\t              t            \n";
    cout << "\t\t\t\t\t\t\t\t             (" << angulo << ")             \n";
    cout << "\t\t\t\t\t\t\t\t      w =  -------------------    \n";
    cout << "\t\t\t\t\t\t\t\t              (" << tiempo << ")            \n";
    double velocidadAngular = calcularVelocidadAngular(angulo, tiempo);
    cout << "\t\t\t\t\t\t\t\t      w = " << velocidadAngular << " rad/s.\n\n";
}

// Formato para Periodo desde frecuencia
void OPperiodo(double frecuencia) {
	peri();
    cout << "\t\t\t\t\t\t\t\tRemplazamos los datos:\n\n";
    cout << "\t\t\t\t\t\t\t\t              1            \n";
    cout << "\t\t\t\t\t\t\t\t      T =  ---------    \n";
    cout << "\t\t\t\t\t\t\t\t              f            \n";
    cout << "\t\t\t\t\t\t\t\t             (1)           \n";
    cout << "\t\t\t\t\t\t\t\t      T =  -------------------    \n";
    cout << "\t\t\t\t\t\t\t\t             (" << frecuencia << ")           \n";
    double periodo = calcularPeriodo(frecuencia);
    cout << "\t\t\t\t\t\t\t\t      T = " << periodo << " s.\n\n";
}

// Formato para Aceleración Centrípta desde velocidad angular y radio
void OPacelcent_angular(double velocidadAngular, double radio) {
	acelcent();
	
    cout << "\t\t\t\t\t\t\t\tRemplazamos los datos:\n\n";
    cout << "\t\t\t\t\t\t\t\t      a_c =  w^2 * r            \n";
  
    cout << "\t\t\t\t\t\t\t\t      a_c = (" << velocidadAngular << "^2) * " << radio << "           \n";
    double aceleracionCentripeta = calcularAceleracionCentripetaDesdeVelocidadAngular(velocidadAngular, radio);
    cout << "\t\t\t\t\t\t\t\t      a_c = " << aceleracionCentripeta << " m/s^2.\n\n";
}

// Formato para Aceleración Tangencial
void OPacelTangencial(double variacionVelocidad, double variacionTiempo) {
	aceltan();
    cout << "\t\t\t\t\t\t\t\tRemplazamos los datos:\n\n";
    cout << "\t\t\t\t\t\t\t\t              ?v            \n";
    cout << "\t\t\t\t\t\t\t\t      a_t =  ---------    \n";
    cout << "\t\t\t\t\t\t\t\t              ?t            \n";
    cout << "\t\t\t\t\t\t\t\t             (" << variacionVelocidad << ")           \n";
    cout << "\t\t\t\t\t\t\t\t      a_t =  -------------------    \n";
    cout << "\t\t\t\t\t\t\t\t             (" << variacionTiempo << ")           \n";
    double aceleracionTangencial = calcularAceleracionTangencial(variacionVelocidad, variacionTiempo);
    cout << "\t\t\t\t\t\t\t\t      a_t = " << aceleracionTangencial << " m/s^2.\n\n";
}

// Formato para Aceleración Total
void OPacelTotal(double aceleracionCentripeta, double aceleracionTangencial) {
	aceltotal();
    cout << "\t\t\t\t\t\t\t\tRemplazamos los datos:\n\n";
    cout << "\t\t\t\t\t\t\t\t      a_total = raiz(a_c^2 + a_t^2)\n";
    cout << "\t\t\t\t\t\t\t\t      a_total = raiz(" << aceleracionCentripeta << "^2 + " << aceleracionTangencial << "^2)\n";
    double aceleracionTotal = calcularAceleracionTotal(aceleracionCentripeta, aceleracionTangencial);
    cout << "\t\t\t\t\t\t\t\t      a_total = " << aceleracionTotal << " m/s^2.\n\n";
}

