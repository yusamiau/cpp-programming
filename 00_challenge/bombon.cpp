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
    int entero = 10;
    float decimal = 3.14;
    double doble = 3.14;   // Decimales con mayor presicion
    bool booleana = true;
    bool booleana2 = false;
    char caracter = 'A';
    string cadena = "flor de dragon";

    cout << "Hola, " << lenguaje << "!" << endl;

    cout << entero << endl;
    cout << decimal << endl;
    cout << doble << endl;
    cout << booleana << endl;
    cout << booleana2 << endl;
    cout << caracter << endl;
    cout << cadena << endl;

    return 0;
}