#include <iostream>
#include <string>

int main(int const argc, char const*const* argv) {
    // Como acceder en C++ ----------------------------------------------
    /*
    for (int i = 0; i < argc; i++) {
        std::cout << argv[i] << '\n';
    }   
    // g++ -o exe main.cpp  // exe es el nombre del ejecutable
    // ./exe 12 abc -z 3
    */
    
    // Conversion to std::string, int, ... -----------------------------
    if (argc < 3) {
        std::cerr << "Usage: " << argv[0] << " <word> <times>\\n";
        return  EXIT_FAILURE;
    }

    auto word = std::string(argv[1]);
    int times = atoi(argv[2]);

    for (int i = 0; i < times; i++) {
        std::cout << word << ' ';
    }
    std::cout << '\n';
    // ./say
    // ./say ho! 4
    return 0;
}