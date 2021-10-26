#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H

#include "conta.h"
#include <string>

class ContaPoupanca : public Conta {
private:
public:
    ContaPoupanca(std::string nome, std::string cpf, double saldo_atual);
    static double rendimento;
    void muda_rendimento(double novo_rendimento);
    virtual double get_saldo() override;
};

#endif // CONTAPOUPANCA_H
