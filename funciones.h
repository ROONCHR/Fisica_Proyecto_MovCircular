#ifndef FUNCIONES_H
#define FUNCIONES_H

using namespace std;
// Declaración de funciones para cálculos de movimiento circular
const float PI = 3.14159;
const int ANCHO_CONSOLA = 150;
// Función para calcular la velocidad angular
void mostrarTeoria();
void realizarOperaciones();
void ejerciciosPropuestos();
void guiaResolucionProblemas();
void formulario();
// Funciones de operaciones y aplicación de fórmulas
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
void centrarTexto(string texto);


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