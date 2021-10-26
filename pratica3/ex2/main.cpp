#include <iostream>
#include <iomanip>
#include "data.h"

int main(int argc, char **argv) {

    Data a;

    int dia, mes, ano;
    std::cout << "Escreva um dia: ";
    std::cin >> dia;
    std::cout << "Escreva o numero de um mes: ";
    std::cin >> mes;
    std::cout << "Esreva um ano: ";
    std::cin >> ano;

    a.ler_data(dia,mes,ano);

    a.imprimir_numeros();

    a.imprimir_extenso();

    int b = a.GetDataEmSegundos(a);
    std::cout << b << std::endl;

    return 0;
}
