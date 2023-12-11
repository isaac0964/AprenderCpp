#include <iostream>
#include <vector>

int main() {
    // Condicionales -----------------------------------------
    int i = 0;
    std::cout << "Ingrese i: ";
    std::cin >> i;

    if (i < 0) {
       std::cout << "i es negativo\n";
    }

    else if (i == 0) {
        std::cout << "i es cero\n";
    }

    else {
        std::cout << "i es positiva\n"; 
    }

    if (int x = 2 * i; x > 10) {std::cout << x << '\n';}

    // Switch ----------------------------------------------
    int m = i % 5;
    switch (m) {
        case 0:  // hacer esto si m es 0
            break;
        case 1:  // hacer esto si m es 1
        case 3:  // hacer esto (tambien) si m es 1 o 3
            break;
        default:  // Hacer esto si m no es 0, 1 o 3
            break;  
    }

    //switch (int k = 2 * i; k) {}

    // Operador Condicional Ternario
    int i1 = 8;
    int j = i1 > 10 ? 1 : 2;
    std::cout << "El valor de j es: " << j << '\n';

    int b = true;
    double d = b ? 2.0 : 0.5;
    double e = !b ? 2.0 : 0.5;
    std::cout << "El valor de d es: " << d << '\n';
    std::cout << "El valor de e es: " << e << '\n';

    // Bucles ----------------------------------------------
    // Imprimir 0 1 2 3 4
    for (int i = 0; i < 5; i++) {
        std::cout << i << " ";
    }
    std::cout << "\n";

    std::vector<int> v {1,2,3,4,5};
    // Imprimir los elementos del vector en consola
    for (int x: v) {std::cout << x << " ";}
    std::cout << "\n";

    int j1 = 5;
    while (j1 < 10) {
        std::cout << j1 << " ";
        j1++;
    }
    std::cout << "\n";

    int j2 = 10;
    do {
        std::cout << j2 << " ";
        j2--;
    } while (j2 > 0);
    std::cout << "\n";
}