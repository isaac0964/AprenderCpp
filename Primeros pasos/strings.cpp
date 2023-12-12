#include <iostream>
# include <string>

int main() {
    // std::string ---------------------------------------------
    std::string hw = "Hello";
    std::string s = hw;  // Copia de hw

    hw += " World!";  // Concatenar

    std::cout << "Mostrando hw: " << hw << '\n';
    std::cout << "Mostrando quinto caracter de hw: " << hw[4] << '\n';
    std::cout << "Mostrando s: " << s << '\n';

    // char = std::string's Element Type ----------------------
    char c1 = 'A';
    char c2 = 65;  // Codigo ASCII para 'A'
    
    std::cout << "c1: " << c1 << '\n';
    std::cout << "c2: " << c2 << '\n';
    std::cout << "c1 == c2? " << (c1 == c2) << '\n';

    std::string s1 = "xyz";
    s1[1] = c1;
    std::cout << "s1 modificado: " << s1 << '\n';
    s1 += c2;
    std::cout << "s1 concatenado: " << s1 << '\n';

    // Caracteres especiales
    std::cout << "Probar salto de linea:\nLinea1\nLinea2\nLinea3\n";  // Saltos de linea
    std::cout << "Probar tabulacion:\nLinea1\tLinea2\tLinea3\n";  // Tabulacion
    std::cout << "Probar comillas simples:\nEl me dijo \'cita\'\n";  // Comillas simples
    std::cout << "Probar comillas dobles:\nEl me dijo \"cita\"\n";  // Comillas dobles
    std::cout << "Probar backslash:\nC:\\Users\\me\\hello.cpp\n";  // Comillas simples

    // Manipulacion de strings -------------------------------
    std::string s2 = "Lo siento, Dave.";

    // Modifican al string
    s2.insert(9, " mucho");
    std::cout << "s2 con .insert(): " << s2 << '\n';

    s2.erase(5,2);  // Eliminar dos caracteres de la cadena, a partir del indice 5
    std::cout << "s2 con .erase(): " << s2 << '\n';

    s2.replace(15, 5, "Angel");  // Remplazar 5 caracteres desde el indice 15 con "Angel"
    std::cout << "s2 con .replace(): " << s2 << '\n';

    s2.resize(4);  // Dejar solo 4 caracteres en s2
    std::cout << "s2 con .resize(4): " << s2 << '\n';

    s2.resize(10, '?');  // Agrandar s2 a 10 caracteres y rellenar con ?
    std::cout << "s2 con .resize(10, '?'): " << s2 << '\n';

    s2 = "Lo siento, Dave.";

    // No modifican al string

    std::cout << "Encontrar la primera ocurrencia de la \'e\' en s2 (desde el inicio): " << s2.find('e') << '\n';
    std::cout << "Encontrar la primera ocurrencia de la \'e\' en s2 (desde el final): " << s2.rfind('e') << '\n';
    // Buscar letra que no esta ahi  (Devuelve string::npos)
    std::cout << "Encontrar la primera ocurrencia de la \'x\' en s2 (desde el inicio): " << s2.find('x') << '\n';
    std::cout << "Encontrar la primera ocurrencia de la \'o\' en s2 (desde la posicion 5): " << s2.find('o', 5) << '\n';

    // Extraer subcadena substr(i, n) de n caracteres a partir del indice i (incluido) (devuelve nuevo string)
    std::cout << "Extraer substring: " << s2.substr(3, 6) << '\n';

    // Checar si contiene un string
    // std::cout << "s2 contiene \'siento\'?" << s2.contains("siento") << '\n';  (C++23)

    // Checar si termina con
    // std::cout << "s2 termina con \'ave.\'?" << s2.ends_with("ave.") << '\n';  (C++20)

    // Checar si empieza con 
    // std::cout << "s2 empieza con \'L\'?" << s2.stars_with("L") << '\n';  (C++20)

    // std::getline -----------------------------------------------------
    std::string sl;
    
    // Vemos que el target string se puede reusar (se extrae todo el texto ingresando solo un string)
    getline(std::cin, sl, '\t');  // Leer hasta el proximo tab
    std::cout << "texto extraido hasta el tab: " << sl << '\n';
    getline(std::cin, sl, 'a');  // Leer hasta la siguiente 'a'
    std::cout << "texto extraido hasta la \'a\': " << sl << '\n';
    getline(std::cin, sl);  // Leer la linea completa
    std::cout << "texto extraido por linea: " << sl << '\n';

    return 0;
}