//
// Created by Valentina on 18/4/2020.
//

#ifndef TRABAJOPRACTICO1_VALIDACIONES_H
#define TRABAJOPRACTICO1_VALIDACIONES_H

#include <sstream>
#include <algorithm>

using namespace std;

bool validarRango(int n);
/*
 * PRE: n tiene que ser distinto de vacio
 * POST: Devuelve true si n esta dentro del rango, de lo contrario false
 */

int validarEntero(string n);
/*
 * PRE: -
 * POST: Si el parametro recibido es un numero entero, lo devuelve casteado.
 *       Sino devuelve ERROR_ENTERO
 *
 * Para validar si es o no un entero, se utiliza la funcion
 * bool all_of(InputIterator first, InputIterator last, UnaryPredicate pred);
 * de la libreria <algorithm>
 * Esta funcion recibe como parametros el inicio de la iteracion, el final
 * y la condicion para comparar
 * Va verificando uno por uno si se cumple con la condicion. Si todos cumplen devuelve true, sino false
 */

int validarNumero(string n);
/*
 * PRE: -
 * POST: Llama a las funciones validarEntero() y validarRanog(). Si ambas se cumplen, devuelve el
 *       numero casteado como int.
 *       Sino devuelve ERROR_RANGO o ERROR_ENTERO
 */


#endif //TRABAJOPRACTICO1_VALIDACIONES_H