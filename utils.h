/*
 * 75.41/95.15: Algoritmos y Programacion II - Catedra Juarez - 1°C 2020
 * Trabajo Practico Individual N1: De los arabes a los romanos
 * Hecho por Valentina Varela Rodriguez - 105374
 */

#ifndef TRABAJOPRACTICO1_UTILS_H
#define TRABAJOPRACTICO1_UTILS_H

#include <fstream>
#include <iostream>

using namespace std;

void guardarNumero(ofstream* archRomanos, ofstream* archLog, int numero, string strNumeroEntero);
/*
 * PRE: Los archivos deben estar abiertos correctamente
 * POST: Guarda el numero en el archivo correspondiente
 */

void mostrarLogo();
/*
 * PRE: -
 * POST: Muestra por pantalla el logo
 */

#endif //TRABAJOPRACTICO1_UTILS_H

