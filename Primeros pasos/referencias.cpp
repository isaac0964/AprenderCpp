#include <iostream>
#include <vector>
#include <string>

// Mixed passing (por ref + por valor) -------------------------
std::vector <int> incl_first_last(std::vector <int>, std::vector<int> const&);

// Parametros non-const reference ------------------------------
void swap(int&, int&);

int main() {

    // Capacidades (y limitaciones) ***************************************

    // Referencias no-const -----------------------------------------------
    int i = 2;
    int& ri = i;  // Referencia a 1

    std::cout << "Valor de i: " << i << '\n';
    std::cout << "Valor de ri: " << ri << '\n';

    i = 5;
    std::cout << "Valor de i modificado: " << i << '\n';
    std::cout << "Valor de ri al modificar i: " << ri << '\n';

    ri = 88;
    std::cout << "Valor de i al modificar ri: " << i << '\n';
    std::cout << "Valor de ri modificado: " << ri << '\n';

    int i1 = 2;
    int k = 3;
    int& ri1 = i1;

    ri1 = k;  // Asigna el valor de k a i1 (el target de ri1)
    std::cout << "Nuevo valor de ri1: " << ri1 << '\n';
    std::cout << "Nuevo valor de i1: " << i1 << '\n';

    //int &r2;  // ERROR: una referencia siempre debe inicializarse
    //double& r3 = i1;  // ERROR: los tipos deben coincidir

    // Referencias const ------------------------------------------------
    int ic = 2;
    int const& cric = ic;  // Referencia constante a ic

    std::cout << "Valor de ic: " << ic << '\n';
    std::cout << "Valor de cric: " << cric << '\n';

    ic = 5;

    std::cout << "Valor modificado de ic: " << ic << '\n';
    std::cout << "Valor de cric con ic modificado: " << ic << '\n';

    //cric = 88;  // ERROR: es constante

    // Referencias auto ------------------------------------------------
    int ia = 2;
    double d = 2.023;
    double x = i + d;

    auto & ria = ia;  // ri: int &
    auto const& crx = x;  // crx: double const&

    // Uso *************************************************************

    // Referencias en Range-Based for Loops ----------------------------

    /*
    std::vector<std::string> v;
    v.resize(10);

    // Modificar elementos del vector
    for (std::string & s : v) {std::cin >> s;}

    // Acceso de solo lectura a los elementos del vector
    for (std::string const& s : v) {std::cout << s << '\n';}
    */

    /*
    // Modificar elementos del vector
    for (auto & s : v) {std::cin >> s;}

    // Acceso de solo lectura a los elementos del vector
    for (auto const& s : v) {std::cout << s;}
    */

   // Parametros non-const reference --------------------------------
   int a = 5;
   int b = 3;
   swap(a,b);

   std::cout << "a despues del swap: " << a << '\n'
             << "b despues del swap: " << b << '\n';

    // Reglas de Ligadura ********************************************

    // Rvalues vs Lvalues --------------------------------------------

    int a1 = 1;  // a1 y b1 son lvalues
    int b1 = 2;  // 1 y 2 son rvalues

    a1 = b1;
    b1 = a1;

    a = (a * b);  // (a * b) es un rvalue
    int c = a * b;

    //a * b = 3;  // ERROR: no se puede hacer asignacion a un rvalue

    /*
    std::vector<int> read_samples(int n) {...}
    auto v = read_samples(1000)  // read_samples(1000) es rvalue, v es lvalue
    */

    // Reglas de ligadura de referencias
    int const& crval = 3;

    return 0;
}

// Mixed passing (por ref + por valor) -------------------------
std::vector <int> incl_first_last(std::vector<int> x, std::vector<int> const& y){
    if (y.empty()) return x;
    // Append a una copia local de x
    x.push_back(y.front());
    x.push_back(y.back());
    return x;
}

// Parametros non-const reference ------------------------------
void swap (int& i, int& j) {
    int temp = i;
    i = j;
    j = temp;
}