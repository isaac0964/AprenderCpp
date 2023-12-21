#include <iostream>
#include <fstream>  // file stream header

int main () {
    // Escribir Archivo de Texto ---------------------------------
    /*
    std::ofstream os {"cuadrados.txt"};  // Abrir archivo

    // Si el stream esta ok, se puede empezar a escribir
    if (os.good()) {
        for (int x = 1; x <= 6; x++) {
            // Escribir x espacio x^2 nueva linea
            os << x << ' ' << (x*x) << '\n';
        }
    }
    */
    // Leer Archivos de Texto ---------------------------------------
    std::ifstream is {"cuadrados.txt"};  // Abrir archivo

    if (is.good()) {
        double x, y;
        // Siempre y cuando se puedan leer dos valores
        while (is >> x >> y) {
            // Imprimir el par (x,y)
            std::cout << x << "^2 = " << y << '\n';
        }
    }

    return 0;
}  // El archivo se cierra automaticamente