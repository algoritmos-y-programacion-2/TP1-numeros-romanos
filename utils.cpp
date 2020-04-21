//
// Created by Valentina on 18/4/2020.
//

#include "utils.h"

void mostrarLogo() {
    _sleep(200);
    cout << logoSoldadoRomano();
    _sleep(1500);
    cout << endl << "Cargando datos..." << endl;
    _sleep(300);
}

void mostrarMensajeConDelay(string mensaje, int delayMS) {
    cout << mensaje;
    _sleep(delayMS);
}

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

string logoSoldadoRomano(){
    return "                                                                                                        \n"
           "                                                                                                        \n"
           "                                                                                                        \n"
           "                                            -//::--...   ....__                                         \n"
           "                                   .:+syy:  +yyyyyyyyyy  yyyyy+//:-..                                   \n"
           "                                -/yyyyyyyy: yyyyyyyyyyyy-yyyyyyyyyyyy:-/:-.                             \n"
           "                            .y  yyyyyyyyyyy/yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy+`./:.                       \n"
           "                          .yyyy /syyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy:.                   \n"
           "                        -+yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy-`                 \n"
           "                       `+yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy:`                    \n"
           "                     /yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy.`                      \n"
           "                    yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy.`                        \n"
           "                   yyyyyyyyyyyyyyyyyyyyyyyy++//::::///+yyyyyyyyyyyyyyyyyyyyy:`                          \n"
           "                   yyyyyyyyyyyyyyyyyyyy                        yyyyyyyyyyy+.                            \n"
           "                  yyyyyyyyyyyyyyyyyy/   mmmMMMMMMMMMMMMNNNNmdys     yyyyy:.                             \n"
           "                 yyyyyyyyyyyyyyyyy   mmMMMMMMMMMMMMMMMMMMMMMMMMMNNmmmm/-.`                              \n"
           "                `-yyyyyyyyyyyyyyy   mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM/                                 \n"
           "                yyyyyyyyyyyyyyyy   MMMMMMMMMMMMMMMNNMMMMMMMMMMMMMMMMMm                                  \n"
           "                yyyyyyyyyyyyyyy   MMMMMMMMMMMMmm/                   /`                                  \n"
           "                `-.yyyyyyyyyyy   MMMMMMMMMm      /mmmmMMMMMMMMMmmmmm:`                                  \n"
           "               yyyyyyyyyyyyyyy  MMMMMMMNm     mMMMMMMMMMMMMMMMMMMMMMMMMMm                               \n"
           "               yyyyyyyyyyyyyy/  MMMMMMN     MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMy                             \n"
           "               yyyyyyyyyyyyyy   MMMMMN   MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMy                          \n"
           "               yyyyyyyyyyyyyy  MMMMMM   mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMy                         \n"
           "                `-.yyyyyyyyyy  MMMMM  hMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmy                         \n"
           "                yyyyyyyyyyyyy  MMMM   MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNMmy                         \n"
           "                yyyyyyyyyyyyyy  MMMM  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM                         \n"
           "                 yyyyyyyyyyyyy  MMMM  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM/                        \n"
           "                 yyyyyyyyyyyyyy  MMM  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm                        \n"
           "                 yyyyyyyyyyyyyyy  MM  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm                        \n"
           "                 yyyyyyyyyyyyyyy   M /NMMMMMMMMMMMMMMMMMMMMMMMMMMMNMNMMMMMMMMMMm                        \n"
           "                  yyyyyyyyyyyyyyy     NMMMMMMMMMMMMMMMMMMMMMMMMMMs    sMMMMMMMMM                        \n"
           "                   `-.yyyyyyyyyyy      MMMMMMMMMMMMMMMMMMMMMMMMMMs     ``mMMMMMM                        \n"
           "                   yyyyyyyyyyyyyy      NMMMMMMMMMMMMMNMMMMMMMMMMMMMMy       `/MM                        \n"
           "                    yyyyyyyyyyyyy      MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm    `mMy                       \n"
           "                    yyyyyyyyyyyyy     /MMMMMMMMMMMMv' 'vMMMMMMMMMMMMMMMMMms   mMv                       \n"
           "                    yyyyyyyyyyyy      /MMMMMMMMMMMMm    MMMMMMMMMMMMMMMMMMMMm  NN                       \n"
           "                     yyyyyyyyyyy    yMMMMMMMMMMMMMm     MMMMMMMMMMMMMMMMMMMMN  sm                       \n"
           "                     yyyyyyyyyyy   mMMMMMMMMMMMMMMm    MMMMMMMMMMMMMMMMMMMMMMN `.`                      \n"
           "                     yyyyyyyyyy    mMMMMMMMMMMMMMMm    MMMMMMMMMMMMMMMMMMMMMMM                          \n"
           "                     yyyyyyyyy                        MMMMMMMMMMMMMMMMMMMMMMMM                          \n"
           "                     yyyyyyyy                        `mMMMMMMMMMMMMMMMMMMMMMMMM                         \n"
           "                    yyyyy                              `mMMMMMMMMMMMMMMMMMMMMMM.                        \n"
           "                   yyy                                    `mMMMMMMMMMMMMMMMMMMMN.                       \n"
           "                  yy                                        `mMMMMMMMMMMMMMMMMMMV                       \n"
           "                 y                                             `mMNMMMMMMMMMMMMMMV                      \n"
           "                                                                 `mMMMMMMMMMMMMMMmV                     \n"
           "                                                                    `mMMMMMMMMMMMMdV                    \n"
           "                                                                       `mMMMMMMMMMMMV                   \n"
           "                                                                            `mMMMMMMMV                  \n"
           "                                                                                mMMMMm                  \n"
           "                                                                                    VVv                 \n"
           "                                                                                                        \n"
           "                                                                                                        \n";
}
