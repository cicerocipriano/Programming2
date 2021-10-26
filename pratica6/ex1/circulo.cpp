#include <string>
#include "forma.h"
#include "forma2d.h"
#include "circulo.h"

Circulo::Circulo(std::string cor, std::string nome, double raio):
    _cor(cor), _nome(nome), _raio(raio) {}

Circulo::~Circulo(){}

std::string Circulo::get_cor(){
    return this->_cor;
}

std::string Circulo::get_nome(){
    return this->_nome;
}

double Circulo::get_area(){
    return _raio * _raio * 3.1415;
}

double Circulo::get_perimetro(){
    return _raio * 2.0 * 3.1415;
}
