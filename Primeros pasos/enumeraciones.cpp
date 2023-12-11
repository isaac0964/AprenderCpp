#include <iostream>

int main() {
    // Scoped Enumerations
    enum class day {mon, tue, wed, thu, fri, sat, sun };

    day d = day::mon;
    d = day::tue;  // Correcto
    // ERROR: d = wed, 'wed' solo se conoce en el day's scope

    // Unscoped Enumerations
    enum days {mon, tue, wed, thu, fri, sat, sun};

    days da = mon;  // OK, enumerador mon no tiene scope
    int i = wed;  // Ok, i=2
    std::cout << "El entero al que se mapea wed es: " << i << '\n';
    // ERROR: enum stars {sun, ...};  colision de nombre

    // Custom Enumerator Mapping
    enum class month {
        jan = 1, feb = 2, mar = 3, apr = 4, may = 5, jun = 6,
        jul = 7, aug = 8, sep = 9, oct = 10, nov = 11, dec = 12
    };

    enum class flag {
        A = 2, B = 8, C = 5, D, E, F = 25
    };

    // Conversion to/from underlying type
    // Enum -> int
    int p = static_cast<int> (month::mar);
    std::cout << "El valor de mar es: " << p << '\n';

    // int -> Enum
    int idx = 0;
    std::cout << "Ingrese el indice del mes: ";
    std::cin >> idx;
    month m1 = static_cast<month> (idx);

    return 0;
}