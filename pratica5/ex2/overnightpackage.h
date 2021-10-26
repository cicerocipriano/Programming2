#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "package.h"

class OvernightPackage : public Package {
private:
    unsigned int _taxa_adicional;
public:
    OvernightPackage(std::string nome, std::string endereco, unsigned int peso, unsigned int custo_quilo, unsigned int taxa_adicional);
    virtual double calculateCost() override;
};

#endif // OVERNIGHTPACKAGE_H
