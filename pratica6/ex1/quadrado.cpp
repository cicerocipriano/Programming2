#include <string>
#include "forma.h"
#include "forma2d.h"
#include "quadrado.h"

Quadrado::Quadrado(std::string cor, std::string nome, double lado):
    _cor(cor), _nome(nome), _lado(lado) {}

Quadrado::~Quadrado(){}

std::string Quadrado::get_cor(){
    return this->_cor;
}

std::string Quadrado::get_nome(){
    return this->_nome;
}

double Quadrado::get_area(){
    return _lado * _lado;
}

double Quadrado::get_perimetro(){
    return _lado * 4;
}
