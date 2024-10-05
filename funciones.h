#ifndef FUNCIONES_H
#define FUNCIONES_H


// Declaraci�n de funciones para c�lculos de movimiento circular
const float PI = 3.14159;
// Funci�n para calcular la velocidad angular
void mostrarTeoria();
void realizarOperaciones();
void ejerciciosPropuestos();
void guiaResolucionProblemas();
// Funciones de operaciones y aplicaci�n de f�rmulas
float calcularVelocidadAngular(float frecuencia);

float calcularVelocidadTangencial(float radio, float velocidadAngular);

float calcularAceleracionCentripeta(float velocidadTangencial, float radio) ;
int menu();
#endif // FUNCIONES_H
