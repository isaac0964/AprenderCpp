#include <iostream>
#include <string>
#include <vector>

struct point {
        int x;  // <- Member variable
        int y;
    };

enum class month {jan =1, feb=2, mar=3, apr=4, may=5, jun=6, jul=7, aug=8, sep=9, oct=10, nov=11, dec=12};

struct date {
    int yyyy;
    month mm;
    int dd;
};

struct person {
    std::string name;
    date bday;
};

int main() {

    // Como definirlos/usarlos -------------------------------------

    // Crear un nuevo objeto (en el stack)
    point p {44, 55};
    std::cout << "Valor del punto en x: " << p.x << " Valor en y del punto: " << p.y <<'\n';

    p.x = 10;
    p.y = 20;
    std::cout << "Valor modificado del punto en x: " << p.x << " Valor modificado en y del punto: " << p.y <<'\n';

    // Aggregate Initialization ---------------------------------------------------------------------
    date today {2023, month::dec, 20};
    date tomorrow = {2023, month::dec, 21};

    // Compounds --------------------------------------------------------

    // date como miembro de persona
    person ig {"Isaac Gomez", {2000, month::aug, 02}}; 
    std::cout << "El nombre es: " << ig.name << '\n';
    std::cout << "El dia de nacimiento es: " << ig.bday.dd << '\n';

    // Copiado ---------------------------------------------------------
    date a {2023, month::nov, 14};
    date b = a;  // Copia profunda de a
    b.dd = 22;  // cambia solo b
    std::cout << "El dia de a es: " << a.dd << '\n';
    std::cout << "El dia de b es: " << b.dd << '\n';

    point p1 {1, 2};  // Construccion

    point p2 = p1;  // copy construction
    point p3 (p1);  // copy construction
    point p4 {p1};  // copy construction

    auto p5 = p1;  // copy construction
    auto p6 (p1);  // copy construction
    auto p7 {p1};  // copy construction

    p3 = p2;  // copy assigment

    // Vector de Aggregates ----------------------------------------------------
    std::vector<point> v {{1,2}, {5,6}, {8,9}};

    return 0;
}