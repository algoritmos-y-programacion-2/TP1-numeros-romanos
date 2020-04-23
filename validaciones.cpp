//
// Created by Valentina on 18/4/2020.
//

#include "validaciones.h"
#include <regex>
#include <cstdlib>

const int ERROR_ENTERO = -1;
const int ERROR_RANGO = -2;

bool validarRango(int n) {
    return ((n > 0) && (n < 3001));
}

int validarEnteroRegex(string num) {

    int esEntero;
    regex entero("^(\\+|-)?[[:digit:]]+");

    /* Viendo de a partes la expresion regular: ^(\+|-)?[[:digit:]]+
     * ^ indica que la siguiente coincidencia tiene que buscarse al inicio
     * (\+|-) verifica si es un '+' o un '-'
     * ? indica que la coincidencia es opcional (en este caso puede o no estar el '+'/'-')
     * [[:digit:]] verifica si el caracter es un numero [0-9]
     * + lo hace tantas veces como sea posible en el string
     */

    if (regex_match(num, entero)) {
        esEntero = atoi(num.c_str());
    } else esEntero = ERROR_ENTERO;

    return esEntero;
}

int validarNumero(string n) {

    int numeroValidado = validarEnteroRegex(n);

    if (numeroValidado != ERROR_ENTERO) {
        if (!validarRango(numeroValidado)) {
            numeroValidado = ERROR_RANGO;
        }
    }
    return numeroValidado;
}