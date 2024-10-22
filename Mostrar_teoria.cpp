#include <iostream>
#include <cmath>
#include "funciones.h"

using namespace std;
#include <iostream>
#include <iomanip>  // Para setw()
using namespace std;

//const int ANCHO_CONSOLA = 150;  // Ancho de la consola, ajusta seg�n sea necesario
//const double PI = 3.14159265358979323846;  // Valor de pi

void centrarTexto(string texto) {
    int espacios = (ANCHO_CONSOLA - texto.length()) / 2;
    cout << setw(espacios + texto.length()) << texto << endl;
}

// Funciones de teor�a
void veloangu() {
    centrarTexto("1. Velocidad Angular (w)");
    centrarTexto("   ___________________");
    centrarTexto("  |  	   ?angulo    |");
    centrarTexto("  |   w =---------    |");
    centrarTexto("  |         ?t        |");
    centrarTexto("  |___________________|");
    centrarTexto("   Donde:");
    centrarTexto("   - w: velocidad angular (rad/s)");
    centrarTexto("   - ?angulo: cambio en el �ngulo (rad)");
    centrarTexto("   - ?tiempo: cambio en el tiempo (s)\n");
}

void frecu() {
    centrarTexto("2. Frecuencia (f)");
    centrarTexto("   ______________");
    centrarTexto("  |       N      |");
    centrarTexto("  |  f =------   |");
    centrarTexto("  |       t      |");
    centrarTexto("  |______________|");
    centrarTexto("   Donde:");
    centrarTexto("   - f: frecuencia (Hz)");
    centrarTexto("   - N: n�mero de revoluciones");
    centrarTexto("   - t: tiempo (s)\n");
}

void frecuyvelangu() {
    centrarTexto("3. Relaci�n entre Frecuencia y Velocidad Angular");
    centrarTexto("   _______________");
    centrarTexto("  |    w = 2pf    |");
    centrarTexto("  |_______________|");
    centrarTexto("   Donde:");
    centrarTexto("   - w: velocidad angular (rad/s)");
    centrarTexto("   - f: frecuencia (Hz)");
    centrarTexto("   - p: es la constante (pi=3.14\n");
}

void peri() {
    centrarTexto("4. Periodo (T)");
    centrarTexto("    ______________________");
    centrarTexto("   |      1     2p        |");
    centrarTexto("   |  T= --- = ----       |");
    centrarTexto("   |      f     w         |");
    centrarTexto("   |______________________|");
    centrarTexto("   Donde:");
    centrarTexto("   - T: periodo (rad/s)");
    centrarTexto("   - w: velocidad angular (rad/s)");
    centrarTexto("   - f: frecuencia (Hz)");
    centrarTexto("   - p: es la constante (pi=3.14\n");
}

void vellin() {
    centrarTexto("5. Velocidad Lineal (v)");
    centrarTexto("     ________________");
    centrarTexto("    |   v = w * r    |");
    centrarTexto("   |________________|");
    centrarTexto("   Donde:");
    centrarTexto("   - v: velocidad lineal (m/s)");
    centrarTexto("   - w: velocidad angular (rad/s)");
    centrarTexto("   - r: radio de la trayectoria (m)\n");
}

void acelcent() {
    centrarTexto("6. Aceleraci�n Centripeta (a_c)");
    centrarTexto("    _____________________________");
    centrarTexto("   |           v^2               |");
    centrarTexto("   |    a_c = ----- = w^2 * r    |");
    centrarTexto("   |             r               |");
    centrarTexto("   |_____________________________|");
    centrarTexto("   Donde:");
    centrarTexto("   - v: velocidad lineal (m/s)");
    centrarTexto("   - w: velocidad angular (rad/s)");
    centrarTexto("   - r: radio de la trayectoria (m)\n");
}

void aceltan() {
    centrarTexto("7. Aceleraci�n Tangencial (a_t)");
    centrarTexto("    _______________________");
    centrarTexto("   |             ?v        |");
    centrarTexto("   |      a_t = ----       |");
    centrarTexto("   |             ?t        |");
    centrarTexto("   |_______________________|");
    centrarTexto("   Donde:");
    centrarTexto("   - ?v : variaci�n de velocidad");
    centrarTexto("   - ?t : variaci�n de tiempo\n");
}

void aceltotal() {
    centrarTexto("8. Aceleraci�n Total (a)");
    centrarTexto("    __________________________");
    centrarTexto("   |        _______________   |");  
    centrarTexto("   |  a = \\/ (a_c^2 + a_t^2)  |");
    centrarTexto("   |__________________________|");
    centrarTexto("   Donde:");
    centrarTexto("   - a_c : Aceleraci�n Centripeta");
    centrarTexto("   - a_t : Aceleraci�n Tangencial\n");
}

void veltang() {
    centrarTexto("9. Velocidad Tangencial (v_t)");
    centrarTexto("    __________________________________");
    centrarTexto("   |        2p * r                    |");  
    centrarTexto("   | v_t = -------- =  2p*r*f = r*w   |");
    centrarTexto("   |          T                       |");
    centrarTexto("   |__________________________________|");
    centrarTexto("   Donde:");
    centrarTexto("   - r: radio");
    centrarTexto("   - T: periodo (rad/s)");
    centrarTexto("   - f: frecuencia(Hz)");
    centrarTexto("   - w: velocidad angular (rad/s)");
    centrarTexto("   - p: es la constante (pi=3.14\n");
}

void mostrarTeoria() {
	system("cls");
    centrarTexto("--- Teor�a de Movimiento Circular ---");
    centrarTexto("El movimiento circular describe el movimiento de un objeto a lo largo de una trayectoria circular.");
    centrarTexto("Algunos conceptos importantes son:");
    centrarTexto("- Velocidad Angular (w): la velocidad con la que un objeto gira, medida en radianes por segundo (rad/s).");
    centrarTexto("- Velocidad Tangencial (v): la velocidad de un objeto en la direcci�n de su movimiento en la trayectoria.");
    centrarTexto("- Aceleraci�n Centripeta (a): la aceleraci�n dirigida hacia el centro de la trayectoria.");
    centrarTexto(" Esos son algunos de los conceptos m�s importantes, tambi�n tenemos algunas f�rmulas y relaciones:\n");

    system("pause");
    veloangu();
    system("pause");
    frecu();
    system("pause");
    frecuyvelangu();
    system("pause");
    peri();
    system("pause");
    vellin();
    system("pause");
    acelcent();
    system("pause");
    aceltan();
    system("pause");
    aceltotal();
    system("pause");
    veltang();
    system("pause");

    centrarTexto("--------------------------------------\n");
}


