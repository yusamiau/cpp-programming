// URL del sitio oficial de C++: https://isocpp.org/

// La sintaxis de un comentario de una sola linea es con doble diagonal //
/*
 * Los comentarios de varias lineas
 * se crean de la forma con
 * doble diagonal y dos asteriscos entre ellas.
 * */

#include <iostream>
#include <string>

using namespace std;

const string lenguaje = "C++";

int main() {
    // Tipos de variables:
    int entero;
    float decimal;
    double doble;   // Decimales con mayor presicion
    bool booleana;
    char caracter;
    string cadena;

    cout << "Hola, " << lenguaje << "!" << endl;

    return 0;
}