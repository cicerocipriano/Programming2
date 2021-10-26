#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include "package.h"

class TwoDayPackage : public Package {
private:
    unsigned int _taxa_fixa;
public:
    TwoDayPackage(std::string nome, std::string endereco, unsigned int peso, unsigned int custo_quilo, unsigned int taxa_fixa);
    virtual double calculateCost() override;
};

#endif // TWODAYPACKAGE_H
