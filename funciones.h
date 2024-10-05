#ifndef FUNCIONES_H
#define FUNCIONES_H

using namespace std;
// Declaración de funciones para cálculos de movimiento circular
const float PI = 3.14159;
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
#endif // FUNCIONES_H
