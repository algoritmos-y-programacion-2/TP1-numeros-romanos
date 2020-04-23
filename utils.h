//
// Created by Valentina on 18/4/2020.
//

#ifndef TRABAJOPRACTICO1_UTILS_H
#define TRABAJOPRACTICO1_UTILS_H

#include <fstream>
#include <iostream>

using namespace std;

void escribirEnArchivo(ofstream* archivo, string frase);
/*
 * PRE: El archivo debe estar abierto correctamente
 * POST: Escribe la frase en el archivo
 */

string convertirEnteroARomano(int entero);
/*
 * PRE: -
 * POST: Devuelve el numero en sistema romano
 */

void guardarNumero(ofstream* archRomanos, ofstream* archLog, int numero, string strNumeroEntero);

void mostrarLogo();
/*
 * PRE: -
 * POST: Muestra por pantalla el logo
 */

#endif //TRABAJOPRACTICO1_UTILS_H

