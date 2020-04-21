/*
 * 75.41/95.15: Algoritmos y Programacion II - Catedra Juarez - 1°C 2020
 * Trabajo Practico Individual N1: De los arabes a los romanos
 * Hecho por Valentina Varela Rodriguez - 105374
 */

#include "validaciones.h"
#include "utils.h"

int main() {

    mostrarLogo();

    ifstream archivoAConvertir(ARCHIVO_ENTEROS);

    string stringNumeroEntero, numeroRomano;
    int numeroEnteroValidado;

    if(!archivoAConvertir.fail()) {

        ofstream archivoConvertidos(ARCHIVO_ROMANOS);
        ofstream archivoLog(ARCHIVO_LOG);

        while(archivoAConvertir >> stringNumeroEntero) {

            numeroEnteroValidado = validarNumero(stringNumeroEntero);

            switch (numeroEnteroValidado){

                case ERROR_RANGO:
                    escribirEnArchivo(&archivoLog, stringNumeroEntero+" valor fuera de rango");
                    break;

                case ERROR_ENTERO:
                    escribirEnArchivo(&archivoLog, stringNumeroEntero+" valor erroneo");
                    break;

                default:
                    numeroRomano = convertirEnteroARomano(numeroEnteroValidado);
                    escribirEnArchivo(&archivoConvertidos, numeroRomano);
                    break;
            }
        }
        cout << endl << "Los datos se han exportado de manera satisfactoria a 'romanos.txt' y 'log.txt.'" << endl;
        _sleep(2500);
        archivoLog.close();
        archivoConvertidos.close();
    }
    else {
        cout << "No se encontro el archivo 'valores.txt'." << endl <<
                "Por favor asegurese de que 'valores.txt' se encuentre en la misma carpeta "
                "que el ejecutable 'trabajoPractico1.exe' " << endl;
        _sleep(7500);
    }
    archivoAConvertir.close();
    return 0;
}
