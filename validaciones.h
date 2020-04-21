//
// Created by Valentina on 18/4/2020.
//

#ifndef TRABAJOPRACTICO1_VALIDACIONES_H
#define TRABAJOPRACTICO1_VALIDACIONES_H

#include <sstream>
#include <algorithm>

using namespace std;

const int ERROR_ENTERO = -1;
const int ERROR_RANGO = -2;

int validarEntero(string n);
/*
 * Recibe como parametro un string, y verifica si es un numero entero o no
 * Si lo es, lo devuelve casteado. Sino, devuelve ERROR_ENTERO
 *
 * Para validar si es o no un entero, se utiliza la funcion
 * bool all_of(InputIterator first, InputIterator last, UnaryPredicate pred);
 * de la libreria <algorithm>
 * Que recibe como parametros el inicio de la iteracion, el final y la condicion
 * para comparar
 * Va verificando uno por uno si cumplen con la condicion, y devuelve true o false
 */

bool validarRango(int n);
/*
 * Recibe como parametro un entero, valida que este dentro del rango
 * Si lo esta devuelve true, sino false
 */

int validarNumero(string n);
/*
 * Recibe como parámetro un string, llama a las dos funciones anteriores
 * para validar ambas condiciones
 * Si se cumplen devuelve el string recibido casteado como entero
 * Sino, devuelve uno de los dos errores: ERROR_RANGO o ERROR_ENTERO
 */

bool deseaContinuar();
/*
 *
 */

#endif //TRABAJOPRACTICO1_VALIDACIONES_H
