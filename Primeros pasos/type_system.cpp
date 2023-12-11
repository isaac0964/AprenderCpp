#include <iostream>


constexpr int cxf (int i) {return i * 2;}
int foo (int i) {return i * 2;}


int main() {
    // Declarar constantes usando const -------------------------------
    int i = 0;
    std::cout << "Ingrese el valor de i: ";
    std::cin >> i;
    int const k = i;  // Constante entera
    // k = 3;  ERROR: k es una constate 

    // Alias de tipo ------------------------------------------------
    using real = double;

    // Deduccion del tipo -------------------------------------------
    auto i1 = 2;  // int
    auto u = 56u;  // unsigned int
    auto d = 2.023;  // double
    auto f = 4.01f;  // float
    auto l = -787878797978l;  // long int

    auto x = 0 * i;  // int
    auto y = i + d;  // double 
    auto z = f * d;  // double

    // Expresiones constantes: constexpr
    constexpr int i2 = 2;  // OK 2 es una literal

    constexpr int j = cxf(5);  // OK cxf es una constante expr
    constexpr int k1 = cxf(i2);  // OK cxf e i2 son constexpr

    int x1 = 0;  // No es constexpr
    int  l1 = cxf(x);  // OK no está en un contexto de constexpr
    
    // contextos contexpr
    // constexpr int m1 = cxf(x1);  ERROR: x1 no es constexpr
    // constexpr int n = foo(5);  ERROR: foo no es constexpr

}