#include "contacorrente.h"
#include <string>

ContaCorrente::ContaCorrente(std::string nome, std::string cpf, double saldo_atual):
     Conta(nome,cpf,saldo_atual) {}

double ContaCorrente::get_saldo(){
    return _saldo_atual;
}
