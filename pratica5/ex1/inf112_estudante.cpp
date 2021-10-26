#include "inf112_estudante.h"

Estudante::Estudante(std::string nome, int matricula, std::string codigo, int ano):
    Pessoa(nome), _matricula(matricula), _turma(codigo,ano) {}

int Estudante::get_matricula() const {
    return this->_matricula;
}

std::string Estudante::defina_meu_tipo() const {
    return "Sou um estudante!";
}

void Estudante::set_codigo(std::string codigo) {
    _turma.set_codigo(codigo);
}

void Estudante::set_ano(int ano) {
    _turma.set_ano(ano);
}

std::string Estudante::get_codigo() {
    return _turma.get_codigo();
}

int Estudante::get_ano() {
    return _turma.get_ano();
}
