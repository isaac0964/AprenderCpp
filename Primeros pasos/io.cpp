#include <iostream>

int main() 
{
    int i;
    // Leer valor en i
    std::cin >> i;

    // Imprimir valor de i
    std::cout << i << "\n";

    // Concatenar std::cin
    int m = 0;
    double d = 0.0;

    std::cin >> m >> d;
    std::cout << "Tu entrada fue:\n" << m << " y " << d << "\n";
    return 0;
}