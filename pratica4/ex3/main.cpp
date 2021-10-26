#include "aquecedor_v2.h"
#include <iostream>

int main(int argc, char **argv) {

    Aquecedor a;
    double b;

    b = a.get_temperatura();
    std::cout << "Temperatura atual: " << b << std::endl;

    a.set_temp(41);

    b = a.get_temperatura();
    std::cout << "Temperatura atual: " << b << std::endl;

    a.set_temp(10);

    b = a.get_temperatura();
    std::cout << "Temperatura atual: " << b << std::endl;

    a.aquecer();

    b = a.get_temperatura();
    std::cout << "Temperatura atual: " << b << std::endl;

    a.set_temp_fator(25,10);

    b = a.get_temperatura();
    std::cout << "Temperatura atual: " << b << std::endl;

    a.resfriar();

    b = a.get_temperatura();
    std::cout << "Temperatura atual: " << b << std::endl;

    a.set_fator(100);

    a.aquecer();

    b = a.get_temperatura();
    std::cout << "Temperatura atual: " << b << std::endl;

    return 0;
}
