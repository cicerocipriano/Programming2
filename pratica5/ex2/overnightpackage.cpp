#include "overnightpackage.h"

OvernightPackage::OvernightPackage(std::string nome, std::string endereco, unsigned int peso, unsigned int custo_quilo, unsigned int taxa_adicional):
    Package(nome,endereco,peso,custo_quilo), _taxa_adicional(taxa_adicional) {}

double OvernightPackage::calculateCost() {
    double aux = _custo_quilo + _taxa_adicional;
    return _peso * aux;
}
