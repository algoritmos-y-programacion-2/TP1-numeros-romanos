//
// Created by Valentina on 18/4/2020.
//

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

