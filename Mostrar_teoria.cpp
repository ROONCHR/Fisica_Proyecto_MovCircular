#include <iostream>
#include <cmath>
#include "funciones.h"

using namespace std;
// Funciones de teoría
void veloangu(){
	cout << "1. Velocidad Angular (w)\n";
	cout << "   ___________________\n";
    cout << "  |  	   ?angulo    |\n";
    cout << "  |   w =---------    |\n";
    cout << "  |         ?t        |\n";
    cout << "  |___________________|\n";
    cout << "   Donde:\n";
    cout << "   - w: velocidad angular (rad/s)\n";
    cout << "   - ?angulo: cambio en el ángulo (rad)\n";
    cout << "   - ?tiempo: cambio en el tiempo (s)\n\n";
}
void frecu(){
	cout << "2. Frecuencia (f)\n";
	cout << "   ______________\n";
    cout << "  |       N      |\n";
    cout << "  |  f =------   |\n";
    cout << "  |       t      |\n";
    cout << "  |______________|\n";
    cout << "   Donde:\n";
    cout << "   - f: frecuencia (Hz)\n";
    cout << "   - N: número de revoluciones\n";
    cout << "   - t: tiempo (s)\n\n";
}
void frecuyvelangu(){
	cout << "3. Relación entre Frecuencia y Velocidad Angular\n";
	cout << "   _______________\n";
    cout << "  |    w = 2pf    |\n";
    cout << "  |_______________|\n\n";
    cout << "   Donde:\n";
    cout << "   - w: velocidad angular (rad/s)\n";
    cout << "   - f: frecuencia (Hz)\n";
    cout << "   - p: es la constante (pi="<<PI<<")\n";
}
void peri(){
	cout << "4. Periodo (T)\n";
	cout << "    ______________________\n";
    cout << "   |      1     2p        |\n";
    cout << "   |  T= --- = ----       |\n";
    cout << "   |      f     w         |\n";
    cout << "   |______________________|\n\n";
    cout << "   Donde:\n";
    cout << "   - T: periodo (rad/s)\n";
    cout << "   - w: velocidad angular (rad/s)\n";
    cout << "   - f: frecuencia (Hz)\n";
    cout << "   - p: es la constante (pi="<<PI<<")\n";
}
void vellin(){
	cout << "5. Velocidad Lineal (v)\n";
	cout << "     ________________\n";
    cout << "    |   v = w * r    |\n ";
    cout << "   |________________|\n";
    cout << "   Donde:\n";
    cout << "   - v: velocidad lineal (m/s)\n";
    cout << "   - w: velocidad angular (rad/s)\n";
	cout << "   - r: radio de la trayectoria (m)\n\n";
}
void acelcent(){
	cout << "6. Aceleración Centripeta (a_c)\n";
	cout << "    _____________________________\n";
    cout << "   |           v^2               |\n";
    cout << "   |    a_c = ----- = w^2 * r    |\n";
    cout << "   |             r               |\n";
    cout << "   |_____________________________|\n\n";
    cout << "   Donde:\n";
    cout << "   - v: velocidad lineal (m/s)\n";
    cout << "   - w: velocidad angular (rad/s)\n";
	cout << "   - r: radio de la trayectoria (m)\n\n";
    
}
void aceltan(){
	cout << "7. Aceleración Tangencial (a_t)\n";
	cout << "    _______________________\n";
    cout << "   |             ?v        |\n";
    cout << "   |      a_t = ----       |\n";
    cout << "   |             ?t        |\n";
	cout << "   |_______________________|\n\n";
    cout << " Donde:\n";
    cout << " - ?v : variacion de tiempo\n";
    cout << " - ?t : variacion de tiempo\n\n";
}
void aceltotal(){
	cout << "8. Aceleración Total (a)\n";
	cout << "    __________________________\n";
	cout << "   |        _______________   | \n";  
    cout << "   |  a = \/ (a_c^2 + a_t^2)   |\n";
    cout << "   |__________________________|\n\n";
    cout << " Donde:\n";
    cout << " - a_c : Aceleración Tangencial\n";
    cout << " - a_t : Aceleración Centripeta\n\n";
}
void veltang(){
	cout << "9. Velocidad Tangencial (v_t)\n";
	cout << "    __________________________________\n";
	cout << "   |        2p * r                    | \n";  
    cout << "   | v_t = -------- =  2p*r*f = r*w   |\n";
    cout << "   |          T                       |\n";
    cout << "   |__________________________________|\n\n";
    cout << " Donde:\n";
    cout << "   - r: radio \n";
    cout << "   - T: periodo (rad/s)\n";
    cout << "   - f: frecuencia(Hz)\n";
    cout << "   - w: velocidad angular (rad/s)\n";
    cout << "   - p: es la constante (pi="<<PI<<")\n";
}

void mostrarTeoria() {
    cout << "\n--- Teoría de Movimiento Circular ---\n";
    cout << "El movimiento circular describe el movimiento de un objeto a lo largo de una trayectoria circular.\n";
    cout << "Algunos conceptos importantes son:\n";
    cout << "- Velocidad Angular (w): la velocidad con la que un objeto gira, medida en radianes por segundo (rad/s).\n";
    cout << "- Velocidad Tangencial (v): la velocidad de un objeto en la dirección de su movimiento en la trayectoria.\n";
    cout << "- Aceleración Centripeta (a): la aceleración dirigida hacia el centro de la trayectoria.\n";
    cout << " Esos son algunos de los conceptos mas importantes, tambien tenemos alguna formulas y relaciones:\n\n";
    
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
    
    cout << "--------------------------------------\n";
}
