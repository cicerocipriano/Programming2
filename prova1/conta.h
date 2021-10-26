#ifndef CONTA_H
#define CONTA_H

#include <string>

class Conta {
protected:
    std::string _nome;
    std::string _cpf;
    double _saldo_atual;
public:
    Conta(std::string nome, std::string cpf, double saldo_atual);
    virtual double get_saldo();
};

#endif // CONTA_H
