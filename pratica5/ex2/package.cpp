#include "package.h"

Package::Package(std::string nome, std::string endereco, unsigned int peso, unsigned int custo_quilo):
    _nome(nome), _endereco(endereco), _peso(peso), _custo_quilo(custo_quilo) {}

double Package::calculateCost() {
    return _peso * _custo_quilo;
}
