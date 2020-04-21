//
// Created by Valentina on 18/4/2020.
//

#include "utils.h"

void mostrarLogo() {
    string logo;
    logo = logoSoldadoRomano();
    _sleep(500);
    cout << logo;
    _sleep(1500);
    cout << endl << "Cargando datos..." << endl;
    _sleep(350);
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
    return "                                                                                                              \n"
           "                                                                                                              \n"
           "                                                                                                              \n"
           "                                               -//::--...                                                     \n"
           "                                      .:+syy:  +yyyyyyyyyy  yyyyy+//:-..                                      \n"
           "                                   -/yyyyyyyy: yyyyyyyyyyyy-yyyyyyyyyyyy:-/:-.                                \n"
           "                               .y  yyyyyyyyyyy/yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy+`./:.                          \n"
           "                             .yyyy /syyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy:.                      \n"
           "                           -+yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy-`                    \n"
           "                          `+yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy:`                       \n"
           "                        /yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy.`                         \n"
           "                       yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy.`                           \n"
           "                      yyyyyyyyyyyyyyyyyyyyyyyy++//::::///+yyyyyyyyyyyyyyyyyyyyy:`                             \n"
           "                      yyyyyyyyyyyyyyyyyyyy                        yyyyyyyyyyy+.                               \n"
           "                     yyyyyyyyyyyyyyyyyy/   sdmNNMMMMMMMMMMNNNNmdys     yyyyy:.                                \n"
           "                    yyyyyyyyyyyyyyyyy   omNMMMMMMMMMMMMMMMMMMMMMMMMNNmdyo/-.`                                 \n"
           "                   `-yyyyyyyyyyyyyyy   dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN/                                    \n"
           "                   yyyyyyyyyyyyyyyy   NMMMMMMMMMMMMMMNNMMMMMMMMMMMMMMMMMo                                     \n"
           "                   yyyyyyyyyyyyyyy   NMMMMMMMMMMMmm/                   y`                                     \n"
           "                   `-.yyyyyyyyyyy   NMMMMMMMMm      /mmmmMMMMMMMMMmmmmm:`                                     \n"
           "                  yyyyyyyyyyyyyyy  hMMMMMMNm     mMMMMMMMMMMMMMMMMMMMMMMMMMm                                  \n"
           "                  yyyyyyyyyyyyyy/  NMMMMMN     MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMy                                \n"
           "                  yyyyyyyyyyyyyy   MMMMMN   MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMy                             \n"
           "                  yyyyyyyyyyyyyy  MMMMMM   mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMy                            \n"
           "                   yyyyyyyyyyyyy  MMMMM  hMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmy                            \n"
           "                   yyyyyyyyyyyyy  MMMM   MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNMmy                            \n"
           "                   yyyyyyyyyyyyyy  MMMM  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM                            \n"
           "                    yyyyyyyyyyyyy  MMMM  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM/                           \n"
           "                    yyyyyyyyyyyyyy  MMM  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm                           \n"
           "                    yyyyyyyyyyyyyyy  MM  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm                           \n"
           "                    yyyyyyyyyyyyyyy   M /NMMMMMMMMMMMMMMMMMMMMMMMMMMMNMNMMMMMMMMMMm                           \n"
           "                     yyyyyyyyyyyyyyy     NMMMMMMMMMMMMMMMMMMMMMMMMMMs    sMMMMMMMMM                           \n"
           "                      yyyyyyyyyyyyyy      MMMMMMMMMMMMMMMMMMMMMMMMMMs     ``mMMMMMM                           \n"
           "                      yyyyyyyyyyyyyy      NMMMMMMMMMMMMMNMMMMMMMMMMMMMMy       `/MM                           \n"
           "                       yyyyyyyyyyyyy      MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm    `mMy                          \n"
           "                       yyyyyyyyyyyyy     /MMMMMMMMMMMMv' 'vMMMMMMMMMMMMMMMMMms   mMv                          \n"
           "                       yyyyyyyyyyyy      /MMMMMMMMMMMMm    MMMMMMMMMMMMMMMMMMMMm  NN                          \n"
           "                        yyyyyyyyyyy    yMMMMMMMMMMMMMm     MMMMMMMMMMMMMMMMMMMMN  sm                          \n"
           "                        yyyyyyyyyyy   mMMMMMMMMMMMMMMm    MMMMMMMMMMMMMMMMMMMMMMN `.`                         \n"
           "                        yyyyyyyyyy    mMMMMMMMMMMMMMMm    MMMMMMMMMMMMMMMMMMMMMMM                             \n"
           "                        yyyyyyyyy                        MMMMMMMMMMMMMMMMMMMMMMMM                             \n"
           "                        yyyyyyyy                        `mMMMMMMMMMMMMMMMMMMMMMMMM                            \n"
           "                       yyyyy                              `mMMMMMMMMMMMMMMMMMMMMMM.                           \n"
           "                      yyy                                    `mMMMMMMMMMMMMMMMMMMMN.                          \n"
           "                     yy                                        `mMMMMMMMMMMMMMMMMMMV                          \n"
           "                    y                                             `mMNMMMMMMMMMMMMMMV                         \n"
           "                                                                    `mMMMMMMMMMMMMMMmV                        \n"
           "                                                                       `mMMMMMMMMMMMMdV                       \n"
           "                                                                          `mMMMMMMMMMMMV                      \n"
           "                                                                               `mMMMMMMMV                     \n"
           "                                                                                   mMMMMm                     \n"
           "                                                                                       VVv                    \n"
           "                                                                                                              \n"
           "                                                                                                              \n";
}
