#ifndef FUNCIONES_H
#define FUNCIONES_H


// Declaración de funciones para cálculos de movimiento circular
const float PI = 3.14159;
// Función para calcular la velocidad angular
void mostrarTeoria();
void realizarOperaciones();
void ejerciciosPropuestos();
void guiaResolucionProblemas();
// Funciones de operaciones y aplicación de fórmulas
float calcularVelocidadAngular(float frecuencia);

float calcularVelocidadTangencial(float radio, float velocidadAngular);

float calcularAceleracionCentripeta(float velocidadTangencial, float radio) ;
int menu();
#endif // FUNCIONES_H
