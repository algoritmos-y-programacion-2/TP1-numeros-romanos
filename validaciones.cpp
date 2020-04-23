//
// Created by Valentina on 18/4/2020.
//

#include "validaciones.h"

const int ERROR_ENTERO = -1;
const int ERROR_RANGO = -2;

bool validarRango(int n) {
    return ((n > 0) && (n < 3001));
}

int validarEntero(string n) {
    int esEntero;

    // Verifica que desde el segundo caracter hasta el ultimo sean todos numeros
    if (all_of(n.begin()+1, n.end(), ::isdigit)){

        // Verifica que el primer caracter sea un "+", un "-" o un numero
        if ((n[0] == '+') || (n[0] == '-') ||(isdigit(n[0]))) {

            // Si se cumplen ambas, es un numero (positivo o negativo) por lo tanto se hace el casteo
            stringstream ss(n);
            ss >> esEntero;

        } else esEntero = ERROR_ENTERO;
    } else esEntero = ERROR_ENTERO;

    return esEntero;
}

int validarNumero(string n) {

    int numeroValidado = validarEntero(n);

    if (numeroValidado != ERROR_ENTERO) {
        if (!validarRango(numeroValidado)) {
            numeroValidado = ERROR_RANGO;
        }
    }
    return numeroValidado;
}