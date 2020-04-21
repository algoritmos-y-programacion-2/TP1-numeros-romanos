/*
 * 75.41/95.15: Algoritmos y Programacion II - Catedra Juarez - 1°C 2020
 * Trabajo Practico Individual N1: De los arabes a los romanos
 * Hecho por Valentina Varela Rodriguez - 105374
 */

#include "validaciones.h"
#include "utils.h"

int main() {

    mostrarLogo();

    ifstream archArabes(ARCHIVO_ENTEROS);

    if(!archArabes.fail()) {

        string stringNumeroEntero, numeroRomano;
        int numEnteroValidado;
        ofstream archRomanos(ARCHIVO_ROMANOS);
        ofstream archLog(ARCHIVO_LOG);

        while(archArabes >> stringNumeroEntero) {

            numEnteroValidado = validarNumero(stringNumeroEntero);

            switch (numEnteroValidado){

                case ERROR_RANGO:
                    escribirEnArchivo(&archLog, stringNumeroEntero+" valor fuera de rango");
                    break;

                case ERROR_ENTERO:
                    escribirEnArchivo(&archLog, stringNumeroEntero+" valor erroneo");
                    break;

                default:
                    numeroRomano = convertirEnteroARomano(numEnteroValidado);
                    escribirEnArchivo(&archRomanos, numeroRomano);
                    break;
            }
        }
        mostrarMensajeConDelay(MENSAJE_EXITOSO, 2000);
        archLog.close();
        archRomanos.close();
    }
    else mostrarMensajeConDelay(MENSAJE_ERROR, 7000);

    archArabes.close();
    return 0;
}
