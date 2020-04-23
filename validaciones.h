//
// Created by Valentina on 18/4/2020.
//

#ifndef TRABAJOPRACTICO1_VALIDACIONES_H
#define TRABAJOPRACTICO1_VALIDACIONES_H

#include <string>

using namespace std;

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