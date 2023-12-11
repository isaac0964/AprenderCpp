#include <iostream>

int main()
{
    // Declarar e inicializar i
    int i = 1;
    // Imprimir el valor de i
    std::cout << i << '\n';

    // Operaciones aritmetics 
    int a = 4;
    int b = 3;

    // Aritmetica -------------------
    a = a + b;  // a = 7
    a += b;  // a = 10

    a = a - b;  // a = 7
    a -= b;  // a = 4

    a = a * b;  // a = 12
    a *= b;  // a = 36

    a = a / b;  // a = 12
    a /= b;  // a = 4

    // Operacion modulo
    a = a % b;  // 1 (resto de la division)

    // Incrementos y Decrementos ---------------------
    int p = 4;
    int q = 3;

    q = p++;  // p = 5, q = 4
    q = ++p;  // p = 6, q = 6

    q = --p;  // p = 5, q = 5
    q = p--;  // p = 4, q = 5

    // Comparaciones ------------------------------

    // 2-way comparisons
    int x = 10;
    int y = 5;

    bool b1 = x == 5;  // falso
    bool b2 = (x != 6);  // true

    bool b3 = x > y;  // true
    bool b4 = x < y;  // falso
    bool b5 = y >= 5;  // true
    bool b6 = x <= 30;  // true

    // Logica booleana ----------------------------
    // Operadores
    bool t = true;
    bool f = false;

    bool c = t && f; // false logical AND (and)
    bool d = t || f; // true logical OR (or)
    bool e = !t;  // false  logical NOT (not)

    // Conversion a booleano
    bool j = 12; // true (int -> bool)
    bool g = 0;  // false (int -> bool)
    bool h = 10;  // true (double -> bool)

    std::cout << "12 es: " << j << '\n';
    std::cout << "0 es: " << g << '\n';
    std::cout << "1.2 es: " << h << '\n';

    // Short-circuit evaluation
    int k = 2;
    int l = 8;

    bool bl = (k > 0) || (l < 3);  // Es true porque k>0 es true y ya no se evalua l < 3

    // Tamano en memoria de los tipos fundamentales ---------------------
    char car = 'A';
    bool bo = true;
    int in = 1234;
    long lon = 12;
    short sh = 8;

    // Los tamanos son en multiplos de sizeof(char)
    std::cout << '\n' << "Los siguientes tamanos estan en multiplos de sizeof(char)\n";
    std::cout << "El numero de bits en un char es de: " << CHAR_BIT << '\n';
    std::cout << "El tamano de char es: " << sizeof(car)  << '\n';
    std::cout << "El tamano de bool es: " << sizeof(bo)  << '\n';
    std::cout << "El tamano de int es: " << sizeof(in)  << '\n';
    std::cout << "El tamano de long es: " << sizeof(lon)  << '\n';
    std::cout << "El tamano de short es: " << sizeof(sh)  << '\n';
    std::cout << '\n';

    // Type Narrowing -------------------------------
    double dou = 1.23456;
    float fl = 2.53;
    unsigned u = 120;

    double e2 = f;  // ok float -> double

    int i2 = 2.5;  // Narrowing double -> int
    int i3 = u;  // Narrowing unsigned int -> int
    int i4 = fl;  // Narrowing float -> int
    return 0;
    }