//
// Created by Valentina on 18/4/2020.
//

#include "validaciones.h"

int validarEntero(string n) {
    int esEntero;

    // Chequea que desde el segundo caracter hasta el ultimo sean todos numeros
    if (all_of(n.begin()+1, n.end(), ::isdigit)){
        // Chequea que el primer caracter sea un "+", un "-" o un numero
        if ((n[0] == '+') || (n[0] == '-') ||(isdigit(n[0]))) {
            // Si se cumplen ambas, es un numero (positivo o negativo) por lo tanto
            // se hace el casteo
            stringstream ss(n);
            ss >> esEntero;
        }
        // De lo contrario no es un entero
        else
            esEntero = ERROR_ENTERO;
    }
    else
        esEntero = ERROR_ENTERO;

    return esEntero;
}

bool validarRango(int n) {
    bool estaEnRango = true;
    if ((n < 1) || (n > 3000)) {
        estaEnRango = false;
    }
    return estaEnRango;
}

int validarNumero(string n) {

    int numeroValidado;
    numeroValidado = validarEntero(n);

    if (numeroValidado != ERROR_ENTERO) {
        if (!validarRango(numeroValidado)) {
            numeroValidado = ERROR_RANGO;
        }
    }

    return numeroValidado;
}
