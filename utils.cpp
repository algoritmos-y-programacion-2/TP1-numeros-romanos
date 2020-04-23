//
// Created by Valentina on 18/4/2020.
//

#include "utils.h"

const int ERROR_ENTERO = -1;
const int ERROR_RANGO = -2;

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

void guardarNumero(ofstream* archRomanos, ofstream* archLog, int numero, string strEntero) {

    string numeroRomano;

    switch (numero){

        case ERROR_RANGO:
            escribirEnArchivo(*&archLog, strEntero+" valor fuera de rango");
            break;

        case ERROR_ENTERO:
            escribirEnArchivo(*&archLog, strEntero+" valor erroneo");
            break;

        default:
            numeroRomano = convertirEnteroARomano(numero);
            escribirEnArchivo(*&archRomanos, numeroRomano);
            break;
    }
}

void mostrarLogo() {
    cout <<  "                                                                                                    " << endl;
    cout <<  "                                            -//::--...   ....__                                     " << endl;
    cout <<  "                                   .:+syy:  +yyyyyyyyyy  yyyyy+//:-..                               " << endl;
    cout <<  "                                -/yyyyyyyy: yyyyyyyyyyyy-yyyyyyyyyyyy:-/:-.                         " << endl;
    cout <<  "                            .y  yyyyyyyyyyy/yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy+`./:.                   " << endl;
    cout <<  "                          .yyyy /syyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy:.               " << endl;
    cout <<  "                        -+yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy-`             " << endl;
    cout <<  "                     /yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy.`                  " << endl;
    cout <<  "                    yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy.`                    " << endl;
    cout <<  "                   yyyyyyyyyyyyyyyyyyyyyyyy++//::::///+yyyyyyyyyyyyyyyyyyyyy:`                      " << endl;
    cout <<  "                   yyyyyyyyyyyyyyyyyyyy                        yyyyyyyyyyy+.                        " << endl;
    cout <<  "                  yyyyyyyyyyyyyyyyyy/   mmmMMMMMMMMMMMMNNNNmdys     yyyyy:.                         " << endl;
    cout <<  "                 yyyyyyyyyyyyyyyyy   mmMMMMMMMMMMMMMMMMMMMMMMMMMNNmmmm/-.`                          " << endl;
    cout <<  "                `-yyyyyyyyyyyyyyy   mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM/                             " << endl;
    cout <<  "                yyyyyyyyyyyyyyyy   MMMMMMMMMMMMMMMNNMMMMMMMMMMMMMMMMMm                              " << endl;
    cout <<  "                yyyyyyyyyyyyyyy   MMMMMMMMMMMMmm/                   /`                              " << endl;
    cout <<  "                `-.yyyyyyyyyyy   MMMMMMMMMm      /mmmmMMMMMMMMMmmmmm:`                              " << endl;
    cout <<  "               yyyyyyyyyyyyyyy  MMMMMMMNm     mMMMMMMMMMMMMMMMMMMMMMMMMMm                           " << endl;
    cout <<  "               yyyyyyyyyyyyyy/  MMMMMMN     MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMy                         " << endl;
    cout <<  "               yyyyyyyyyyyyyy   MMMMMN   MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMy                      " << endl;
    cout <<  "               yyyyyyyyyyyyyy  MMMMMM   mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMy                     " << endl;
    cout <<  "                `-.yyyyyyyyyy  MMMMM  hMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmy                     " << endl;
    cout <<  "                yyyyyyyyyyyyy  MMMM   MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNMmy                     " << endl;
    cout <<  "                yyyyyyyyyyyyyy  MMMM  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM                     " << endl;
    cout <<  "                 yyyyyyyyyyyyyy  MMM  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm                    " << endl;
    cout <<  "                 yyyyyyyyyyyyyyy  MM  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm                    " << endl;
    cout <<  "                 yyyyyyyyyyyyyyy   M /NMMMMMMMMMMMMMMMMMMMMMMMMMMMNMNMMMMMMMMMMm                    " << endl;
    cout <<  "                  yyyyyyyyyyyyyyy     NMMMMMMMMMMMMMMMMMMMMMMMMMMs    sMMMMMMMMM                    " << endl;
    cout <<  "                   `-.yyyyyyyyyyy      MMMMMMMMMMMMMMMMMMMMMMMMMMs     ``mMMMMMM                    " << endl;
    cout <<  "                   yyyyyyyyyyyyyy      NMMMMMMMMMMMMMNMMMMMMMMMMMMMMy       `/MM                    " << endl;
    cout <<  "                    yyyyyyyyyyyyy      MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm    `mMy                   " << endl;
    cout <<  "                    yyyyyyyyyyyyy     /MMMMMMMMMMMMv' 'vMMMMMMMMMMMMMMMMMms   mMv                   " << endl;
    cout <<  "                    yyyyyyyyyyyy      /MMMMMMMMMMMMm    MMMMMMMMMMMMMMMMMMMMm  NN                   " << endl;
    cout <<  "                     yyyyyyyyyyy    yMMMMMMMMMMMMMm     MMMMMMMMMMMMMMMMMMMMN  sm                   " << endl;
    cout <<  "                     yyyyyyyyyyy   mMMMMMMMMMMMMMMm    MMMMMMMMMMMMMMMMMMMMMMN `.`                  " << endl;
    cout <<  "                     yyyyyyyyyy    mMMMMMMMMMMMMMMm    MMMMMMMMMMMMMMMMMMMMMMM                      " << endl;
    cout <<  "                     yyyyyyyyy                        MMMMMMMMMMMMMMMMMMMMMMMM                      " << endl;
    cout <<  "                     yyyyyyyy                        `mMMMMMMMMMMMMMMMMMMMMMMMM                     " << endl;
    cout <<  "                    yyyyy                              `mMMMMMMMMMMMMMMMMMMMMMM.                    " << endl;
    cout <<  "                   yyy                                    `mMMMMMMMMMMMMMMMMMMMN.                   " << endl;
    cout <<  "                  yy                                        `mMMMMMMMMMMMMMMMMMMV                   " << endl;
    cout <<  "                 y                                             `mMNMMMMMMMMMMMMMMV                  " << endl;
    cout <<  "                                                                 `mMMMMMMMMMMMMMMmV                 " << endl;
    cout <<  "                                                                    `mMMMMMMMMMMMMdV                " << endl;
    cout <<  "                                                                       `mMMMMMMMMMMMV               " << endl;
    cout <<  "                                                                            `mMMMMMMMV              " << endl;
    cout <<  "                                                                                mMMMMm              " << endl;
    cout <<  "                                                                                    VVv             " << endl;
}
