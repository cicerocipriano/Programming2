#include "contapoupanca.h"
#include <string>

ContaPoupanca::ContaPoupanca(std::string nome, std::string cpf, double saldo_atual):
     Conta(nome,cpf,saldo_atual) {}

double ContaPoupanca::rendimento = 0.0192;

void ContaPoupanca::muda_rendimento(double novo_rendimento) {
    ContaPoupanca::rendimento = novo_rendimento;
}

double ContaPoupanca::get_saldo(){
    _saldo_atual += _saldo_atual * rendimento;
    return _saldo_atual;
}
