#include "twodaypackage.h"

TwoDayPackage::TwoDayPackage(std::string nome, std::string endereco, unsigned int peso, unsigned int custo_quilo, unsigned int taxa_fixa):
    Package(nome,endereco,peso,custo_quilo), _taxa_fixa(taxa_fixa) {}

double TwoDayPackage::calculateCost() {
    double aux = Package::calculateCost();
    return aux + _taxa_fixa;
}
