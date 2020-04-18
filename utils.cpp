//
// Created by Valentina on 18/4/2020.
//

#include "utils.h"

void escribirEnArchivo(ofstream* archivo, string frase) {
    *archivo << frase << endl;
}

string convertirEnteroARomano(int entero) {

    int arrayEnteros[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    string arrayRomanos[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    int ultPosicion = 12;
    string romano;

    while (entero > 0) {

        int cociente = entero / arrayEnteros[ultPosicion];
        entero = entero % arrayEnteros[ultPosicion];

        while (cociente--) {
            romano += arrayRomanos[ultPosicion];
        }

        ultPosicion--;
    }
    return romano;
}
