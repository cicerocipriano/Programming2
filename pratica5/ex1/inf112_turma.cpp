#include "inf112_turma.h"

Turma::Turma(std::string codigo, int ano):
    _codigo(codigo), _ano(ano) {}

void Turma::set_codigo(std::string codigo) {
    _codigo = codigo;
}

void Turma::set_ano(int ano) {
    _ano = ano;
}

std::string Turma::get_codigo() {
    return this->_codigo;
}

int Turma::get_ano() {
    return this->_ano;
}
