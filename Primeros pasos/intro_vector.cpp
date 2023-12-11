#include <iostream>
#include <vector>

int main(){
    // Inicializar vector con 3 elementos
    std::vector<int> v {2, 7, 9};
    // Tamaño del vector
    std::cout << "El tamano del vector es: " << v.size() << '\n';

    // Acceder a elementos del vector
    std::cout << "Elemento con indice 0: " << v[0] <<'\n';
    std::cout << "Elemento con indice 1: " << v[1] <<'\n';

    // cambiar valor
    v[0] = 4;
    std::cout << "Elemento modificado con indice 0: " << v[0] <<'\n';

    // Acceder al primer y ultimo elemento de un vector
    std::cout << "El primer elemento del vector es: " << v.front() << '\n';
    std::cout << "El ultimo elemento del vector es: " << v.back() << '\n';

    // Vector de elementos repetidos
    std::vector<int> v1 (5,2); 
    std::cout << "Vector con elementos repetidos: " << v1[4] << '\n';

    // Hacer append
    std::vector<int> v3;
    std::cout << "Tamano de v3: " << v3.size() << '\n';

    // Anadir un 2 al vector
    v3.push_back(2);
    std::cout << "Nuevo tamano de v3: " << v3.size() << '\n';

    // Anadir un 7 al vector
    v3.push_back(7);
    std::cout << "Nuevo tamano de v3: " << v3.size() << '\n';

    // Anadir un 9 al vector
    v3.push_back(9);
    std::cout << "Nuevo tamano de v3: " << v3.size() << '\n';

    // Hacer resize
    std::vector<int> v4 {2,7,8};
    v4.resize(6, 0);
    std::cout << "Nuevo tamano de v4: " << v4.size() << '\n';
    std::cout << "Ultimo elemento de v4: " << v4.back() << '\n';

    // Borrar elementos del vector
    std::vector<int> v5 {1, 2, 3, 4, 5, 6};
    std::cout << "Tamano de v5: " << v5.size() << '\n';

    // Borrar elementos del final
    v5.pop_back();
    std::cout << "Nuevo tamano de v5: " << v5.size() << '\n';

    v5.pop_back();
    std::cout << "Nuevo tamano de v5: " << v5.size() << '\n';

    // Borrar todos los elementos de v5
    v5.clear();
    std::cout << "Nuevo tamano de v5: " << v5.size() << '\n';

    // Las copias siempre son profundas
    std::vector<int> a {1,2,3,4};
    std::vector<int> b = a;

    if (b==a) std::cout << "Iguales\n";

    b[0] = 9; // Modificar un elemento de b

    if (b!=a) std::cout << "Diferentes\n";

    return 0;
}