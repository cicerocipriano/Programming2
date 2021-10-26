#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include "conta.h"
#include <string>

class ContaCorrente : public Conta {
public:
    ContaCorrente(std::string nome, std::string cpf, double saldo_atual);
    virtual double get_saldo() override;
};

#endif // CONTACORRENTE_H
