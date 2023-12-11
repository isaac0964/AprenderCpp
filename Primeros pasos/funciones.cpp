#include <iostream>

// Funcion para calcular la media de dos numeros 
double media (double a, double b) {
    return (a + b) / 2;
}

// Retornan un valor ------------------------
double square (double x) {
    return (x * x);
}

int max (int x, int y) {
    if (x > y) return x; else return y;
}

// No retornar valor -------------------------
void print_squares (int n) {
    for (int i = 1; i <= n; i++) {
        std::cout << square(i) << '\n';
    }
}

// Deduccion completa del tipo de retorno

/*
auto foo (int i, double d) {
    ...
    return i;
} OK: tipo de retorno intt
*/

/*
auto foo (int i, double d) {
    ...
    return d;
    return i;
} ERROR: tipos de retorno inconsistentes
*/

// Parametros constantes
/*
int foo (int a, int const b) {
    a += 5;
    b += 10;  // ERROR: b es constante
    return (a+b);
}
*/

// Parametros default
double f (int a, double b = 1.5) {
    return (a * b);
}
/*
double foo (int a, int b=1, int c);  // ERROR: los parametros despues de un default deben ser default
*/

// Sobrecarga
/*
int abs (int i){
    return ((i < 0) ? -i : i);
}

double abs (double d) noexcept {
  return ((d < 0.0) ? -1 * d : d);
}
*/

/*
// La siguiente es una sobre carga incorrecta ya que la lista de parametros es la misma
int foo (int i) {
    return (i * 2.5);
}

double foo (int i) {
    return (i * 2);
}
*/

// Funcion recursiva
int factorial (int n) {
    // Condicion de paro
    if (n < 2) return 1;

    return (n * factorial(n-1));
}

bool even(int);  // Declaracion
bool odd(int);  // Declaracion


int main() {
    // Entradas y salidas ****************************************

    // Primer Ejemplo --------------------------------------------
    std::cout << "La media de 2 y 6 es: " <<  media(2, 6) << '\n';

    // Tipo de retorno ------------------------------------------

    // Retornar un valor 
    std::cout << "Cuadrado de 5: " << square(5) << '\n';
    std::cout << "Maximo entre 8 y 4: " << max(8, 4) << '\n';

    // No retornar valor
    std::cout << "Imprimiendo n cuadrados:" << '\n';
    print_squares(6);

    // Parametros -------------------------------------------------
    
    // Parametros default
    std::cout << "Probando parametros default: " << f(2) << '\n';
    std::cout << "Probando parametros default: " << f(2, 3) << '\n';

    // Implementacion *********************************************

    // Recursion -------------------------------------------------
    std::cout << "El factorial de 4 es: " << factorial(4) << '\n';

    // Declaracion vs definicion --------------------------------
    if (even(6)) std::cout << "6 es par\n";  // Ok la funcion ya esta declarada
    if (odd(7))  std::cout << "7 es impar\n";  // Ok la funcion ya esta declarada

    return 0;
}

bool even (int n) {  // Definicion de la funcion even
    return !odd(n);
}

bool odd (int n) {  // Definicion de la funcion odd
    return (n % 2);
}