#include "conta.h"
#include <string>

Conta::Conta(std::string nome, std::string cpf, double saldo_atual):
    _nome(nome), _cpf(cpf), _saldo_atual(saldo_atual) {}

double Conta::get_saldo(){
    return _saldo_atual;
}
