#include "aquecedor.h"
#include <iostream>

int main(int argc, char **argv) {

    Aquecedor a;
    double b;

    b = a.get_temperatura();
    std::cout << "Temperatura atual: " << b << std::endl;

    a.aquecer();

    b = a.get_temperatura();
    std::cout << "Temperatura atual: " << b << std::endl;

    a.aquecer();

    b = a.get_temperatura();
    std::cout << "Temperatura atual: " << b << std::endl;

    a.resfriar();

    b = a.get_temperatura();
    std::cout << "Temperatura atual: " << b << std::endl;

    return 0;
}
