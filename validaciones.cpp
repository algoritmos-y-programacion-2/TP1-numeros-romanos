/*
 * 75.41/95.15: Algoritmos y Programacion II - Catedra Juarez - 1°C 2020
 * Trabajo Practico Individual N1: De los arabes a los romanos
 * Hecho por Valentina Varela Rodriguez - 105374
 */

#include "validaciones.h"
#include <regex>
#include <cstdlib>

bool validarRango(int n) {
    return ((n >= RANGO_MIN) && (n <= RANGO_MAX));
}

int validarEnteroRegex(string num) {

    int esEntero;
    regex entero("^(\\+|-)?[[:digit:]]+");

    /* Analizando de a partes la expresion regular: ^(\+|-)?[[:digit:]]+
     * ^ indica que la siguiente coincidencia tiene que buscarse al inicio
     * (\+|-) verifica si es un '+' o un '-'
     * ? indica que la coincidencia previa es opcional (en este caso puede o no estar el '+'/'-')
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