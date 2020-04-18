#include <iostream>
#include "validaciones.h"
#include "utils.h"

int main() {

    cout << endl << "Cargando datos..." << endl;

    ifstream archivoAConvertir(ARCHIVO_ENTEROS);
    ofstream archivoConvertidos(ARCHIVO_ROMANOS);
    ofstream archivoLog(ARCHIVO_LOG);

    string stringNumeroEntero;

    if(!archivoAConvertir.fail()) {

        while(!archivoAConvertir.eof()) {

            int numeroEnteroValidado;
            archivoAConvertir >> stringNumeroEntero;
            numeroEnteroValidado = validarNumero(stringNumeroEntero);

            switch (numeroEnteroValidado){

                case ERROR_RANGO:
                    escribirEnArchivo(&archivoLog, stringNumeroEntero+" valor fuera de rango");
                    break;
                case ERROR_ENTERO:
                    escribirEnArchivo(&archivoLog, stringNumeroEntero+" valor erroneo");
                    break;
                default:
                    string numeroRomano = convertirEnteroARomano(numeroEnteroValidado);
                    escribirEnArchivo(&archivoConvertidos, numeroRomano);
                    break;
            }
        }
    } else cout << "No se encontró el archivo 'valores.txt' << endl;

    archivoConvertidos.close();
    archivoAConvertir.close();
    archivoLog.close();
    cout << endl << "Los datos se han exportado de manera satisfactoria a romanos.txt y log.txt." << endl;

    return 0;
}
