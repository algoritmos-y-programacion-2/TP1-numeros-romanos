//
// Created by Valentina on 18/4/2020.
//

#ifndef TRABAJOPRACTICO1_UTILS_H
#define TRABAJOPRACTICO1_UTILS_H

#include <fstream>

using namespace std;

const string ARCHIVO_ENTEROS = "valores.txt";
const string ARCHIVO_ROMANOS = "romanos.txt";
const string ARCHIVO_LOG = "log.txt";

void escribirEnArchivo(ofstream* archivo, string frase);
/*
 * Recibe como pararametros un archivo abierto en modo escritura
 * y una frase.
 * Escribe la frase en el archivo
 */

string convertirEnteroARomano(int entero);
/*
 * Recibe como parametro un numero entero, lo convierte a romano
 * y lo devuelve como string
 */

#endif //TRABAJOPRACTICO1_UTILS_H
