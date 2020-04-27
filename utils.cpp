/*
 * 75.41/95.15: Algoritmos y Programacion II - Catedra Juarez - 1°C 2020
 * Trabajo Practico Individual N1: De los arabes a los romanos
 * Hecho por Valentina Varela Rodriguez - 105374
 */

#include "utils.h"

const int ERROR_ENTERO = -1;
const int ERROR_RANGO = -2;

/*
 * PRE: El archivo debe estar abierto correctamente
 * POST: Escribe la frase en el archivo
 */
void escribirEnArchivo(ofstream* archivo, string frase) {
    *archivo << frase << endl;
}

/*
 * PRE: -
 * POST: Devuelve el numero recibido en sistema romano
 */
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

void guardarNumero(ofstream* archRomanos, ofstream* archLog, int numero, string strEntero) {

    string numeroRomano;

    switch (numero){

        case ERROR_RANGO: escribirEnArchivo(*&archLog, strEntero+" valor fuera de rango");
            break;

        case ERROR_ENTERO: escribirEnArchivo(*&archLog, strEntero+" valor erroneo");
            break;

        default:
            numeroRomano = convertirEnteroARomano(numero);
            escribirEnArchivo(*&archRomanos, numeroRomano);
            break;
    }
}

void mostrarLogo() {
    cout << "\n"
            "   _|_|_|                    _|_|                        _|                            \n"
            "   _|    _|    _|_|        _|    _|  _|  _|_|    _|_|_|  _|_|_|      _|_|      _|_|_|  \n"
            "   _|    _|  _|_|_|_|      _|_|_|_|  _|_|      _|    _|  _|    _|  _|_|_|_|  _|_|      \n"
            "   _|    _|  _|            _|    _|  _|        _|    _|  _|    _|  _|            _|_|  \n"
            "   _|_|_|      _|_|_|      _|    _|  _|          _|_|_|  _|_|_|      _|_|_|  _|_|_|    \n"
            "\n"
            "\n"
            "     _|_|        _|_|_|                                                                      \n"
            "   _|    _|      _|    _|    _|_|    _|_|_|  _|_|      _|_|_|  _|_|_|      _|_|      _|_|_|  \n"
            "   _|_|_|_|      _|_|_|    _|    _|  _|    _|    _|  _|    _|  _|    _|  _|    _|  _|_|      \n"
            "   _|    _|      _|    _|  _|    _|  _|    _|    _|  _|    _|  _|    _|  _|    _|      _|_|  \n"
            "   _|    _|      _|    _|    _|_|    _|    _|    _|    _|_|_|  _|    _|    _|_|    _|_|_|    \n" << endl;

}
