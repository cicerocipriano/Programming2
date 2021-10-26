#include <string>
#include "forma.h"
#include "forma2d.h"
#include "triangulo.h"

Triangulo::Triangulo(std::string cor, std::string nome, double lado1, double lado2, double lado3, double altura_relativa_lado1):
    _cor(cor), _nome(nome), _lado1(lado1), _lado2(lado2), _lado3(lado3), _altura_relativa_ao_lado1(altura_relativa_lado1) {}

Triangulo::~Triangulo(){}

std::string Triangulo::get_cor(){
    return this->_cor;
}

std::string Triangulo::get_nome(){
    return this->_nome;
}

double Triangulo::get_area(){
    return _lado1 * _altura_relativa_ao_lado1 / 2.0;
}

double Triangulo::get_perimetro(){
    return _lado1 + _lado2 + _lado3;
}
