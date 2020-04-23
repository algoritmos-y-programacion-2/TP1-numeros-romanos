/*
 * 75.41/95.15: Algoritmos y Programacion II - Catedra Juarez - 1°C 2020
 * Trabajo Practico Individual N1: De los arabes a los romanos
 * Hecho por Valentina Varela Rodriguez - 105374
 *
 * Antes de ejecutar, asegurarse que el archivo 'valores.txt'se encuentre en el mismo
 * directorio que main.cpp utils.cpp y validaciones.cpp
 */

#include "validaciones.h"
#include "utils.h"

const string MENSAJE_EXITOSO = "Los datos se han exportado de manera "
                               "satisfactoria a 'romanos.txt' y 'log.txt.'";

const string MENSAJE_ERROR = "No se encontro el archivo 'valores.txt'.\n"
                             "Por favor asegurese de que 'valores.txt' "
                             "se encuentre en el mismo directorio que el ejecutable.";

const string ARCHIVO_ENTEROS = "valores.txt";
const string ARCHIVO_ROMANOS = "romanos.txt";
const string ARCHIVO_LOG = "log.txt";

int main() {

    mostrarLogo();
    ifstream archArabes(ARCHIVO_ENTEROS);

    if(!archArabes.fail()) {

        ofstream archRomanos(ARCHIVO_ROMANOS);
        ofstream archLog(ARCHIVO_LOG);

        string strNumeroEntero;
        int numEnteroValidado;

        while(archArabes >> strNumeroEntero) {
            numEnteroValidado = validarNumero(strNumeroEntero);
            guardarNumero(&archRomanos, &archLog, numEnteroValidado, strNumeroEntero);
        }

        cout << MENSAJE_EXITOSO << endl;
        archRomanos.close();
        archLog.close();

    } else cout << MENSAJE_ERROR << endl;

    archArabes.close();
    return 0;
}
