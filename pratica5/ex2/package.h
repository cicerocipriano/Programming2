#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>

class Package {
protected:
    std::string _nome;
    std::string _endereco;
    unsigned int _peso;
    unsigned int _custo_quilo;
public:
    Package(std::string nome, std::string endereco, unsigned int _peso, unsigned int custo_quilo);
    virtual double calculateCost();
};

#endif // PACKAGE_H
