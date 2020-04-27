/*
 * 75.41/95.15: Algoritmos y Programacion II - Catedra Juarez - 1°C 2020
 * Trabajo Practico Individual N1: De los arabes a los romanos
 * Hecho por Valentina Varela Rodriguez - 105374
 */

#include "validaciones.h"
#include "utils.h"

const string ARCHIVO_ROMANOS = "romanos.txt";
const string ARCHIVO_LOG = "log.txt";

int main(int argc, char* argv[]) {

    mostrarLogo();

    string archivoEnteros = "valores.txt";

    if (argc == 2) {
        archivoEnteros = argv[1];
    }
    else if (argc > 2) {
        string argumentos;
        for (int i = 1; i < argc; i++){
            argumentos += argv[i];
            argumentos += " ";
        }
        cout << "\nEl nombre del archivo '"<< argumentos << "' no es valido. Recorda que si el nombre tiene espacios,"
                                                        " debe que estar todo entre comillas." << endl;
        cout << "Se utilizara 'valores.txt' como nombre del archivo.\n" << endl;
    }
    ifstream archArabes(archivoEnteros);

    if(!archArabes.fail()) {

        ofstream archRomanos(ARCHIVO_ROMANOS);
        ofstream archLog(ARCHIVO_LOG);
        string strNumeroEntero;
        int numEnteroValidado;

        while(archArabes >> strNumeroEntero) {
            numEnteroValidado = validarNumero(strNumeroEntero);
            guardarNumero(&archRomanos, &archLog, numEnteroValidado, strNumeroEntero);
        }

        cout << "Los datos se han exportado de manera satisfactoria a 'romanos.txt' y 'log.txt.'\n" << endl;
        archRomanos.close();
        archLog.close();

    } else cout << "No se encontro el archivo '" << archivoEnteros << "'.\nPor favor asegurese de que "
                   "se encuentre en el mismo directorio que el ejecutable.\n";

    archArabes.close();
    return 0;
}
