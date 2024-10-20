#ifndef FUNCIONES_H
#define FUNCIONES_H

using namespace std;
// Declaraci�n de funciones para c�lculos de movimiento circular
const float PI = 3.14159;
// Funci�n para calcular la velocidad angular
void mostrarTeoria();
void realizarOperaciones();
void ejerciciosPropuestos();
void guiaResolucionProblemas();
void formulario();
// Funciones de operaciones y aplicaci�n de f�rmulas
float calcularVelocidadAngular(float frecuencia);
float calcularVelocidadTangencial(float radio, float velocidadAngular);
float calcularAceleracionCentripeta(float velocidadTangencial, float radio) ;
float calcularFrecuencia(float n, float t);
double calcularVelocidadAngular(double angulo, double tiempo); 
double calcularPeriodo(double frecuencia) ;
double calcularPeriodoDesdeVelocidadAngular(double velocidadAngular);
double calcularAceleracionCentripetaDesdeVelocidadAngular(double velocidadAngular, double radio) ;
double calcularAceleracionTangencial(double variacionVelocidad, double variacionTiempo);
double calcularAceleracionTotal(double aceleracionCentripeta, double aceleracionTangencial) ;
double calcularVelocidadTangencial(double radio, double periodo);
double calcularVelocidadTangencialDesdeFrecuencia(double radio, double frecuencia);
double calcularVelocidadTangencialDesdeVelocidadAngular(double radio, double velocidadAngular);


int menu();


void veloangu();
void frecu();
void frecuyvelangu();
void peri();
void vellin();
void acelcent();
void aceltan();
void aceltotal();
void veltang();




void OPfrecuyvelangu(float f);
void OPveltang(float r,float f);
void OPacelcent(float vt,float r);
void OPfrecuencia(float n, float t);
void OPvelangular(double angulo, double tiempo);
void OPperiodo(double frecuencia);
void OPacelcent_angular(double velocidadAngular, double radio);
void OPacelTangencial(double variacionVelocidad, double variacionTiempo);
void OPacelTotal(double aceleracionCentripeta, double aceleracionTangencial);
#endif // FUNCIONES_H
