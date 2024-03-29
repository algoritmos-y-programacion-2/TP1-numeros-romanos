/*
 * 75.41/95.15: Algoritmos y Programacion II - Catedra Juarez - 1°C 2020
 * Trabajo Practico Individual N1: De los arabes a los romanos
 * Hecho por Valentina Varela Rodriguez - 105374
 */

#ifndef TRABAJOPRACTICO1_VALIDACIONES_H
#define TRABAJOPRACTICO1_VALIDACIONES_H

#include <string>

using namespace std;

const int RANGO_MIN = 1;
const int RANGO_MAX = 3000;
const int ERROR_ENTERO = -1;
const int ERROR_RANGO = -2;

bool validarRango(int n);
/*
 * PRE: n tiene que ser distinto de vacio
 * POST: Devuelve true si n esta dentro del rango, de lo contrario false
 */

int validarEnteroRegex(string n);
/*
 * PRE: -
 * POST: Si el parametro recibido es un numero entero, lo devuelve casteado.
 *       Sino devuelve ERROR_ENTERO
 */

int validarNumero(string n);
/*
 * PRE: -
 * POST: Llama a las funciones validarEnteroRegex() y validarRanog(). Si ambas se cumplen, devuelve el
 *       numero casteado como int.
 *       Sino devuelve ERROR_RANGO o ERROR_ENTERO
 */


#endif //TRABAJOPRACTICO1_VALIDACIONES_H